#include <stdio.h>
typedef struct answer
{
    int question;
    int strike;
    int ball;
}ANSWER;

int main()
{
    int numChance[1000] = { 0, };


    ///123~987중 가능성 있는수만 1로///
    char tmp[4];
    for (int i = 123; i <= 987; i++)
    {
        sprintf(tmp, "%d", i);

        if (tmp[1] != '0' && tmp[2] != '0'
            && tmp[0] != tmp[1] && tmp[1] != tmp[2] && tmp[0] != tmp[2])
            numChance[i] = 1;
    }

    int n;
    scanf_s("%d ", &n);

    int question;
    int strike;
    int ball;
    ANSWER _answer[100]; //최대 질문 횟수만큼 메모리 할당.

    //n의 수만큼 질문 입력받기
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &question, &strike, &ball);
        _answer[i].question = question;
        _answer[i].strike = strike;
        _answer[i].ball = ball;
    }

    //가능성 없는거 버리기
    for (int i = 123; i <= 987; i++)
    {
        char myAnswer[4];
        char minhyukAnswer[4];


        sprintf(myAnswer, "%d", i);
        for (int j = 0; j < n; j++)
        {
            if (numChance[i] == 0)
                break;

            int strike = 0;
            int ball = 0;

            sprintf(minhyukAnswer, "%d", _answer[j].question);

            for (int n1 = 0; n1 < 3; n1++)
            {
                for (int n2 = 0; n2 < 3; n2++)
                {
                    if (myAnswer[n1] == minhyukAnswer[n2])
                    {
                        if (n1 == n2) strike++;
                        else ball++;

                    }
                }
            }
            if (strike != _answer[j].strike || ball != _answer[j].ball)
                numChance[i] = 0;
        }
    }

    // 가능성 있는 것들에 개수 카운트
    int resultCnt = 0;
    for (int i = 123; i <= 987; i++)
    {
        if (numChance[i] == 1)
            resultCnt++;
    }


    //정답 출력
    printf("%d", resultCnt);


    return 0;
}