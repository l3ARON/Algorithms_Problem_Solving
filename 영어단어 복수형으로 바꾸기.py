'''
3.   
리스트 
word=[‘apple’, ‘ash’, ‘baby’, ‘box’, ‘buzz’, ‘cat’, ‘cantus’, ‘church’, ‘dish’, ‘knife’, ‘lady’, ‘leaf’,  ‘pitch’, ‘stimulus’, ‘taxi’, ‘wish’, ‘wolf’ ]
는 단수명사들로 구성된 리스트이다. 
각 아이템들을 복수명사로 만들어, 
plural 라는 리스트에 추가한 후 
그 결과를 (단수명사)-(복수명사) 형태로 출력 하시오. 

복수명사를 만드는 기준은 다음과 같다.

    a. 명사의 끝이 “y”이면 “y”를 제외하고 “ies”를 붙인다.
    b. 명사의 끝이 “f”, “fe” 이면 “f”, “fe”를 제외하고 “ves”를 붙인다.
    c. 명사가 “s”, “x”, “z”, “ch”, “sh” 로 끝나면, “es”를 붙인다.
    d. 명사가 “us” 로 끝나면, “us”를 제외하고 “i”를 붙인다.
    
    e. 위의 4가지 경우가 아니면 “s”를 붙인다. 

<<결과 예시>>
apple - apples
wolf - wolves
'''

word = ['apple', 'ash', 'baby', 'box', 'buzz', 'cat', 'cantus', 'church', 'dish', 'knife', 'lady', 'leaf', 'pitch', 'stimulus', 'taxi', 'wish', 'wolf']
w = ''
plural = []
for i in range(0, len(word)):
    # a. 명사의 끝이 “y”이면 “y”를 제외하고 “ies”를 붙인다.
    if(word[i][-1] == 'y'):
        w = word[i][:-1] + 'ies'
    # b. 명사의 끝이 “f”, “fe” 이면 “f”, “fe”를 제외하고 “ves”를 붙인다.
    elif(word[i][-1] == 'f'):
        w = word[i][:-1] + 'ves'
    elif(word[i][-2:] == 'fe'):
        w = word[i][:-2] + 'ves'
    # c. 명사가 “s”, “x”, “z”, “ch”, “sh” 로 끝나면, “es”를 붙인다.
    elif(word[i][-1] == 's' or word[i][-1] == 'x' or word[i][-1] == 'z' or word[i][-1] == 'z'):
        w = word[i] + 'es'
    elif(word[i][-2:] == 'ch' or word[i][-2:] == 'sh'):
        w = word[i] + 'es'
    # d. 명사가 “us” 로 끝나면, “us”를 제외하고 “i”를 붙인다.    
    elif(word[i][-2:] == 'ch' or word[i][-2:] == 'sh'):
        w = word[i][:-2] + 'i'
    else:
        w = word[i] + 's'
    plural.append(w)

for i in range(0, len(word)):
    print(word[i], end='')
    print(' - ', end='')
    print(plural[i])

