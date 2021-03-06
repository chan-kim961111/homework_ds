# 연결리스트 이용 성적처리

**[프로그램 작성 요구사항]**

- 구조체와 연결 리스트를 반드시 사용.
- 입력시, scanf_s 함수를 사용
- 정보를 출력할 때는 printf 함수를 사용
- 동적 메모리 할당 및 해제는 malloc, free 함수를 사용
- 정보를 복사할 때 scrcpy, memcpy 함수를 사용
- 연결 리스트의 개념을 사용하기 때문에 학생 수에 제한이 없어야 한다.

---

## 1. 성적처리 구현 예:

구조체와 연결 리스트 개념을 사용하여 아래와 같이 동작하는 성적 처리 프로그램을 작성한다.

- 메뉴 _1_ 기능 선택시 때 점수를 다 입력하면 Menu 화면으로 돌아간다.
- 메뉴 _2_ 기능 선택시 때 출력이 끝나면 Menu 화면으로 돌아간다.

```
[ Menu ]
1. 성적 입력
2. 성적 확인
3. 종료
-------------- 선택 ( 1 ~ 3 ) :
```

1. 성적 입력

1번 선택후해서 학생 이름 입력해 각 과목별 점수를 입력하면 Menu 화면으로 돌아간다.

```
1 번째 학생 이름 : 홍길동
국어 점수 : 80
영어 점수 : 60
수학 점수 : 90

```

2. 성적 확인

1번 선택후해서 학생 이름 입력해 각 과목별 점수를 입력하면 Menu 화면으로 돌아간다.

```
--------------------------------------------
 이름   국어    영어    수학    총점    평균    등수
--------------------------------------------
 이순신 80      88     75     328    82    1등
 강감찬 45      55     65     235    58    2등
 홍길동 50 60 40 220 55 3등
```

3. 종료
   프로그램이 종료됨
