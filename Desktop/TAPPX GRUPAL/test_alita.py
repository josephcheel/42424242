import nltk
from nltk import word_tokenize
from nltk import FreqDist
from nltk import SnowballStemmer
from score import score_by_title
from score import score_by_text
#from score import get_all_scores
import spacy
import json

with open("articles.json") as articles_file:
    articles_dict = json.load(articles_file)
with open("videos.json") as videos_file:
    videos_dict = json.load(videos_file)

nlp=spacy.load('es_core_news_sm')
spanishstemmer=SnowballStemmer('spanish')

def normalize(text):
    doc=nlp(text)
    lexical_tokens=[t.orth_ for t in doc if not t.is_punct | t.is_stop]
    palabras=[t.lower() for t in lexical_tokens if len(t)>3 and t.isalpha()]
    return palabras

#Obtiene un diccionario de keys por titulo y keys por texto de los articulos
key_art_title_dict={}
key_art_text_dict={}
title=""
text=""
print("Obteniendo keys de los articulos...")
for x in articles_dict:
    title=articles_dict[x]['title']
    text=articles_dict[x]['text']
    tokens=normalize(title)
    stems=[spanishstemmer.stem(token) for token in tokens]
    key_art_title_dict[x]=stems
    tokens=normalize(text)
    stems=[spanishstemmer.stem(token) for token in tokens]
    key_art_text_dict[x]=stems
#Obtiene un diccionario de keys por texto de los videos
key_video_text_dict={}
print("Obteniendo keys de los videos...")
for y in videos_dict:
    key_video_text_dict[y]=[word for word in videos_dict[y]['text'].split(' ') if len(word)>3 or word.isupper()]
    text=videos_dict[y]['text']
    tokens=normalize(text)
    stems=[spanishstemmer.stem(token) for token in tokens]
    key_video_text_dict[y]=stems
#Calcula el score entre un articulo y un video proporcionando la key de cada uno
score_title=score_by_title(key_art_title_dict["5fce3e45-1fd8-423f-918c-ed314bece7df"], key_video_text_dict["pre-b42video31"])
print("The score by title is:", score_title)
score_text=score_by_text(key_art_text_dict["5fce3e45-1fd8-423f-918c-ed314bece7df"], key_video_text_dict["pre-b42video31"])
print("The score by text is:",score_text)
total_score=score_title+score_text
print("The total score is:", total_score)
#score_list=get_all_scores(key_art_title_dict, key_art_text_dict, key_video_text_dict)
#print(score_list)