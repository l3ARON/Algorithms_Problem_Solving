'''
2.   
20글자 이상의 영문 문자열을 입력 받는다. 

20글자 미만인 경우 다시 입력 받는다. 

입력 받은 문자열에서 자음들을 찾아서 

새로운 문자열 변수 con에 저장하고 출력한다. 

이어서 문자열 con에 저장된 값을 읽어서, 
대문자의 갯수와 소문자의 갯수를 출력하시오.

<<예시>>
20글자이상의의 문자열을 입력하시오: ALL that I need you Jesus
자음만 찾으면, LLthtndyJss
LLJ, 대문자 3개
thtndyss, 소문자 8개
'''
'''
1. 영문 문자열 입력 받기
    1-2. 20자가 안넘으면 다시 입력받기

2. 입력받은 문자열 한글자씩 확인하면서 자음인지 아닌지 확인하기
    2-1. 만약 자음이면 con이라는 문자열에 추가하기

3. con 출력하기

4. con 안에서 한글자씩 확인해서 
    대문자면 대문자 갯수를 세는 변수를 +1
    소문자면 소문자 갯수를 세는 변수를 +1

    출력
'''
'''
str1 = input("prompt>>")
print(str1)
con = ''

for i in range(0, len(str1)):
    if (str1[i] != 'a'): #and str1[i] != 'i' and str1[i] != 'e' and str1[i] != 'o' and str1[i] != 'u' and str1[i] != ' '):
        con = con + str1[i]

print(con)
'''

str = "ALL that I need you Jesus"

for i in range(0, len(str)):
    if(str[i].isupper()):
        print(str[i], end='')
