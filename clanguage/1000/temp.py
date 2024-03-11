n, m = list(map(int, input().split()))


answer = []

def print_answer(answer):
    for elem in answer:
        print(elem, end = ' ')
    print()

def choose(current_num, cnt):
    if current_num == n+1:
        if cnt == m:
            print_answer(answer)
        return 
    
    answer.append(current_num)
    choose(current_num+1, cnt+1)
    answer.pop()

    choose(current_num+1, cnt)

    return 

choose(1,0)