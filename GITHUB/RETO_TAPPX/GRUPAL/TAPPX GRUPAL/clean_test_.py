#! usr/bin/env python3

import json
import numpy as np
from sentence_transformers import SentenceTransformer
from sklearn.metrics.pairwise import cosine_similarity

model = SentenceTransformer('paraphrase-multilingual-MiniLM-L12-v2', device='cpu')

###		MIN_VALUE IS FOR THE MINIMUM VALUE BETWEEN 0-1 THAT IS ACCEPTED, MAX_NBR_VALUES IS TO SET THE NUMBER OF VIDEO VALUES THAT THE JSON IS OUTPUTING

MIN_VALUE		=	0.4				
MIN_NBR_VALUES	=	2

###		TO OPEN THE INPUT JSONS
with open("articles.json") as articles_file:
    articles = json.load(articles_file)
with open("videos.json") as video_file:
	videos = json.load(video_file)

###		EXTRACT ALL TEXTS IN TWO DIFFERENT LISTS
art_text = []
vid_text = []

for code in articles:
	art_text.append(articles[code]['text'])

for code in videos:
	vid_text.append(videos[code]['text'])

###		CALCULATES THE SIMILARITY BETWEEN ALL TEXTS FROM ARTICLE AND VIDEO, AND ALLOCATES THEM IN A DICTIONARY. ALSO THE MIN_VALUE IS CHECKED AND FINALLY RHE VALUES ARE ORDERED
similarity = {}
for	i, code in enumerate(articles):
	embedding1 = model.encode(art_text[i])
	similarity[code] = {}
	for j, code2 in enumerate(videos):
		embedding2 = model.encode(vid_text[j])
		value = float(cosine_similarity([embedding1], [embedding2])[0][0])
		similarity[code][code2] =  value
	similarity[code] = dict(sorted(similarity[code].items(), key=lambda x: x[1], reverse=True))

###		TO FILTER THE NUMBER OF VALUES THAT THE JSON IS OUTPUTING
similarity_filtered = {}
for i, code in enumerate(similarity):
	similarity_filtered[code] = {}
	for j, code2 in enumerate(similarity[code]):
		if j <= MIN_NBR_VALUES - 1 or similarity[code][code2] > MIN_VALUE:
			similarity_filtered[code][code2] = similarity[code][code2]

###		PRINTS THE JSON
print(json.dumps(similarity_filtered, indent=4))

##		CREATES THE JSON FILE
file_name = "result.json"

with open(file_name, 'w') as file:
    json.dump(similarity_filtered, file, indent=4)