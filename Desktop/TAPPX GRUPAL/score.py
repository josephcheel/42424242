def score_by_title(art_title_keys, vid_keys):
    score = 0
    for art_key in art_title_keys:
        if art_key in vid_keys:
            score+=10
    return score

def score_by_text(art_text_keys, vid_keys, score=0):
    for art_key in art_text_keys:
        if art_key in vid_keys:
            score+=1
    return score

'''def get_all_scores(arts_title_keys, arts_text_keys, vids_keys):
    score_list=[]
    for article in arts_title_keys, arts_text_keys:
        for vid in vids_keys:
            score=score_by_title(arts_title_keys[article], vids_keys[vid])
            score=score_by_text(arts_text_keys[article], vids_keys[vid], score)
            score_list_item=[arts_titles_keys[article], vids_keys[vid], score]
            score_list.append(score_list_item)
    return score_list'''