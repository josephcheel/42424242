#! usr/bin/env python3

import json
import pandas as pd
from sentence_transformers import SentenceTransformer
from sklearn.metrics.pairwise import cosine_similarity

# title
# keywords
# categoriaIAB
# text
# url

#Titulo repetido puede dar una mayor probabilidad de significado

model = SentenceTransformer('paraphrase-multilingual-MiniLM-L12-v2', device='cpu')


with open("articles.json") as articles_file:
    articles = json.load(articles_file)
with open("videos.json") as video_file:
	videos = json.load(video_file)

art_text = []

vid_text = []
for code in articles:
	art_text.append(articles[code]['text'])

for code in videos:
	vid_text.append(videos[code]['text'])


similarity = {}

for	i, code in enumerate(articles):
	embedding1 = model.encode(art_text[i])
	similarity[articles[code]['title']] = {}
	for j, code2 in enumerate(videos):
		embedding2 = model.encode(vid_text[j])
		# similarity[articles[code]['title']][videos[code2]] = cosine_similarity([embedding1], [embedding2])[0][0]
		similarity[articles[code]['title']] = {[videos[code2]] : cosine_similarity([embedding1], [embedding2])[0][0]}
		
		# similarity[articles[code]['title']] = cosine_similarity([embedding1], [embedding2])[0][0]
# print(len(vid_text))
# print(vid_text)
# for i in in range(len(vid_text))
# 	for embedding1, embedding2 in art_text[]


# Print the similarity
# print("Text 1:", art_text[0])
# print("Text 2:", art_text[1])
# for code in articles:
# # 	lst1 = {}
# # 	lst1[articles[code]['title']] = similarity[articles[code]['title']
# # # df = pd.DataFrame(lst1)
# # print(lst1)
# 	print(f"{articles[code]['title']:<10}: {similarity[articles[code]['title']]:<10}")

print(similarity)


# print(articles[code]['text'])
# for code in videos:
# 	print(videos[code]['text'], end="\n\n")
	# if code == "5fb1b862-7965-4d0f-a243-9a8272e28e0f":
	# 	print(articles[code])
	# for row in code:
	# 	print(row)
# print(article)
# print(videos)ñ