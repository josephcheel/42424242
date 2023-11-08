#! usr/bin/env python3

import json
import numpy as np
from sentence_transformers import SentenceTransformer
from sklearn.metrics.pairwise import cosine_similarity

# title
# keywords
# categoriaIAB
# text
# url

#Titulo repetido puede dar una mayor probabilidad de significado

#
BOLD = '\033[1m'
END = '\033[0m'
UNDERLINE = '\033[4m'
#

model = SentenceTransformer('paraphrase-multilingual-MiniLM-L12-v2', device='cpu')
# model.max_seq_length = 511


with open("articles.json") as articles_file:
    articles = json.load(articles_file)
with open("videos.json") as video_file:
	videos = json.load(video_file)

art_text = []
vid_text = []

art_keyw = []
vid_keyw = []

for code in articles:
	art_text.append(articles[code]['text'])

for code in videos:
	vid_text.append(videos[code]['text'])

# for code in articles:
# 	print(articles[code]['keywords'], end="\n\n")
# 	art_keyw.append(articles[code]['keywords'])

# for code in videos:
# 	vid_keyw.append(videos[code]['keywords'])


similarity = {}
# similarity_keywords = {}

# print(type(vid_keyw))

# for vid_list in vid_keyw:
# 	for code in videos:
# 		similarity_keywords[video[code]] = {}	
# 		for word in vid_list:
# 			similarity_keywords[video[code]] += word


# # 		DICTIONRY KEY IS THE URL OF THE VIDEO 
# for	i, code in enumerate(articles):
# 	embedding1 = model.encode(art_text[i])
# 	similarity[articles[code]['title']] = {}
# 	for j, code2 in enumerate(videos):
# 		embedding2 = model.encode(vid_text[j])
# 		similarity[articles[code]['title']][videos[code2]['url']] =  cosine_similarity([embedding1], [embedding2])[0][0]

#		DICTIONRY KEY IS THE REFERENCE OF THE VIDEO 
for	i, code in enumerate(articles):
	embedding1 = model.encode(art_text[i], show_progress_bar=True )
	similarity[articles[code]['title']] = {}
	for j, code2 in enumerate(videos):
		embedding2 = model.encode(vid_text[j], show_progress_bar=True )
		similarity[articles[code]['title']][code2] =  np.float32(cosine_similarity([embedding1], [embedding2])[0][0])



# for	i, code in enumerate(articles):
# 	embedding1 = model.encode(art_text[i])
# 	similarity[articles[code]['title']] = {}
# 	for j, code2 in enumerate(videos):
# 		embedding2 = model.encode(vid_text[j])
# 		print(embedding1)
# 		#print(embedding2)
# 		# print(cosine_similarity([embedding1], [embedding2])[0][0])

# text1 = "La triste historia del submarino espanol que no flotaba | Europa | DW\n\nEl S-80 es la ultima joya de la Armada espanola. El problema es que no flotaba. Eso se resolvio agrandandolo. El problema ahora es que no cabe en su muelle. Y es carisimo, ademas.Habia que renovar la flota de submarinos de Espana y para ello el Ministerio de Defensa decidio invertir 2.132 millones de euros para construir cuatro sumergibles S-80. Todo iba bien hasta que la maquina fue puesta a prueba, en 2013. Entonces se descubrio un error en el diseno que podia poner en riesgo la flotabilidad del submarino. Para decirlo en cristiano: existia la posibilidad de que el S-80 Isaac Peral se hundiera y nunca mas regresara a la superficie.Los expertos hicieron cuentas y descubrieron que le sobraban hasta 100 toneladas debido a \"desviaciones relacionadas con el balance de pesos. Analizaron la situacion y determinaron que para corregir el problema, el sumergible debia ser agrandado. Para estar seguros, contrataron por 14 millones de euros a unos asesores estadounidenses, que llegaron a la misma conclusion. Por eso, de los 71 metros del plan original pasaron a los 80,81. Eureka, asunto resuelto. El submarino ahora podia hundirse y flotar sin problemas. Y como era mas grande, el S-80 paso a llamarse S-80 Plus. Suena logico.Lo malo es que nadie considero que los muelles de atraque en la base naval de Cartagena (Murcia) tienen una dimension maxima de 78 metros. O sea, los submarinos no cabian en su propia casa. Esto obligara al Gobierno espanol a invertir otros 16 millones de euros para dragar las fosas y agrandarlas, entre otras modificaciones, segun reporta El Pais. Lo bueno es que todavia tienen tiempo: se estima que el primero de los submarinos sera entregado en 2022. Lo malo es que los sobrecostos han llevado a que cada aparato cueste casi mil millones de euros (el presupuesto final se estima en 3.907 millones de euros para los cuatro sumergibles), lo que lo hace demasiado caro para competir en el mercado internacional.Quizas sea demasiado grande y quizas sea demasiado caro y quizas se ha demorado anos y anos en ser entregado, pero por ahora, al menos, el submarino espanol se hunde y vuelve a flotar. Y eso ya es un avance.Diego Zuniga (ERS)Deutsche Welle es la emisora internacional de Alemania y produce periodismo independiente en 30 idiomas. Siganos en Facebook | Twitter | YouTube |  \n"
# text2 = "Bienvenidos a Top noticias Nuevo Retraso en el primer submarino. Ese ochenta defensa ya no garantiza que se entregue a la Armada en abril. Un documento de la Direccion General de Armamento y Material revela que se detectaron problemas tecnicos durante una parada programada. Ya solo se habla de que este listo a lo largo del ano dos mil veintitres, ni en febrero ni en abril. El Ministerio de Defensa y Navantia ya contemplan un nuevo retraso en la entrega a la Armada del submarino Ese ochenta y uno Isaac Peral el primero de la serie S ochenta, que debe reemplazar a los dos sumergibles de la clase Ese setenta que aun estan en servicio. La ultima ficha de programa lleva fecha de noviembre de dos mil veintidos. Se incluye novedades en lo que se refiere al calendario y entregas de los submarinos de la clase Ese ochenta En diciembre de dos mil dieciocho Se aprobo la orden de ejecucion complementaria del programa, se indica en el documento de la Subdireccion General de Programas. Esa orden fue posteriormente modificada debido al retraso producido por el estado de alarma ocasionado por la crisis del Cobi diecinueve y se fijaron nuevas fechas contractuales de entrega La entrega del Ese ochenta y uno Isaac Peral se programo para febrero de dos mil veintitres. La del ese ochenta y dos Narciso de Monturiol quedo senalada para diciembre de dos mil veinticuatro y el ese ochenta y tres Cosme Garcia se entregaria en octubre de dos mil veintiseis. Y por ultimo, el es el ochenta y cuatro Mateo Garcia de los Reyes estaria listo en febrero de dos mil. Veintiocho La Ficha actualizada del Ministerio de Defensa Recuerda que en marzo de dos mil veintidos Navantia, la compania que construye estos submarinos en los astilleros de Cartagena, ha emitido una nueva revision de la linea base de planificacion Integrada LBP y de acuerdo con una reciente replanteo y cacion de pruebas que contempla un posible retraso en la entrega del ese ochenta y uno, pasando al veinte de abril de dos mil veintitres Esta era la ultima fecha senalada tras anteriores retrasos Hasta. Ahora se preveia que el ese ochenta y uno Isaac Peral fuera entregado el proximo mes de abril, una vez terminadas todas las pruebas a las que esta siendo sometido el submarino desde que fue puesto a flote. Pero hay un nuevo retraso Tras detallar esos cambios de fechas. La ficha de programa de los ESE ochenta, que elaboro en noviembre la Subdireccion General de Programas del Ministerio de Defensa, revela que debido a problemas tecnicos hallados durante la parada programada, Navantia esta pendiente de emitir una nueva linea base que incluya el desfase derivado de los trabajos necesarios a realizar durante la parada programada que recogera la entrega del ese ochenta y uno a lo largo del ano dos mil veintitres Este documento del Ministerio de Defensa no da mas detalles sobre que problemas tecnicos se encontraron durante la parada programada y tampoco fija por ahora, cuando se podra entregar el ese ochenta y uno si no es en abril. Se entiende que Navantia informara defensa del nuevo calendario con la fecha de entrega que en principio, si no hay nuevos retrasos El. Ese ochenta y uno fue trasladado a dique seco a principios del pasado junio y aunque se apunto que estaria fuera del agua hasta finales de agosto, en septiembre aun no habia vuelto al agua. Se le estaban realizando unos ajustes en el sistema de sonar es En El documento actualmente disponible en la web del Ministerio de Defensa con fecha de noviembre de dos mil veintidos, se indica que la parada programada tras la puesta a flote se inicio en el mes de agosto, estando prevista su finalizacion para mediados del mes de diciembre Sera a lo largo del ano dos mil veintitres no se mencionan retrasos en las fechas de entrega de los otros tres submarinos de la clase ese ochenta y tras la finalizacion de la misma y la aprobacion del panel ejecutivo RTS de dos, se iniciaran las pruebas de inmersion. En el punto sobre la situacion actual del programa se explicaba que el veinte de mayo se habia aprobado el panel ejecutivo delito de revision de listos para pruebas de mar RTS TE, que permitio al ese ochenta y uno comenzar sus pruebas de navegacion en superficie. Tambien dejo por escrito el Ministerio que esta previsto un segundo panel ejecutivo RTS de dos, que permitira comenzar con las pruebas de navegacion en inmersion durante el mes de diciembre de dos mil. Veintidos Sin embargo, aun no se tienen noticias de dichas pruebas de navegacion en inmersion. El diario La Verdad de Murcia publico el pasado doce de noviembre que habla ficha Programa del Ministerio de Defensa sobre los ese ochenta tambien incluye la decision que se tomo hace tiempo de no incluir el moderno sistema de propulsion ahi P era independiente. Pulsion en los primeros submarinos de esta clase, el desarrollo del sistema y pese a desacoplado del desarrollo del proyecto S ochenta. De tal forma que el primer buque en que se instale la gripe durante la construccion sera el ese ochenta y tres al ese ochenta y uno. Y ese ochenta y dos se les instalara tras su entrega en una inmovilizacion programada. Esto quiere decir que el ese ochenta y uno Isaac Peral que se estan probando para entregar a la Armada en dos mil veintitres no contara con este sistema de propulsion. Al principio El ese ochenta y dos Narciso de Monturiol tambien se entregara sin el aire A. Ambos se les instalara cuando deban pasar por el dique seco en una de sus inmovilizaciones periodicas. Usted en el sistema de combate aplazan a enero la primera inmersion del submarino. Ese ochenta y uno Si. No estas suscrito. Suscribete, por favor. Gracias."
# embedding1 = model.encode(text1)
# embedding2 = model.encode(text2)
# print(f"{text1} {len(text1)}--- {text2} {len(text2)}: {cosine_similarity([embedding1], [embedding2])[0][0]}")

# DICTIONRY KEY IS THE REFERENCE OF THE ARTICLE ## FINAL
# for	i, code in enumerate(articles):
# 	embedding1 = model.encode(art_text[i])
# 	similarity[code] = {}
# 	for j, code2 in enumerate(videos):
# 		embedding2 = model.encode(vid_text[j])
# 		similarity[code][code2] =  cosine_similarity([embedding1], [embedding2])[0][0]


#### KEYWORDS
# for	i, code in enumerate(articles):
# 	embedding3 = model.encode(art_keyw[i])
# 	similarity_keywords[code] = {}
# 	for j, code2 in enumerate(videos):
# 		embedding4 = model.encode(vid_keyw[j])
# 		similarity_keywords[code][code2] =  cosine_similarity([embedding3], [embedding4])[0][0]


# FINAL
# print(similarity)
# for article in similarity:
# 	print(BOLD + UNDERLINE + article + END)
# 	for code, value in similarity[article].items():
# 		print(f"{article:.30s}\t\t{code}\t:\t{value}")


print(json.dumps(similarity, default=lambda x: float(x)))



# for article in similarity_keywords:
# 	print(BOLD + UNDERLINE + article + END)
# 	for code, value in similarity_keywords[article].items():
# 		print(f"{article:.30s}\t\t{code}\t:\t{value}")
# 		# print(f"{article}\t{code}\t:\t{value}")					Print complete titles

# print(similarity)