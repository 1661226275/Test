#include<stdio.h>
#include<graphics.h>
#include<easyx.h>
# include <Windows.h>

int main() {
	int a = 0;
	
		initgraph(700, 700);

		IMAGE img, star, relation,realize,plan;
		loadimage(&img, "E:\\���������\\����\\����\\res\\����.jpg");
		loadimage(&star, "E:\\���������\\����\\����\\res\\�ǹ�.jpg");
		putimage(0, 0, &img);
		putimage(291, 639, 50, 50, &star, 300, 151);
		settextcolor(RED);
		settextstyle(30, 0, "����");
		outtextxy(160, 270, "��ϵͼ");
		settextcolor(WHITE);
		outtextxy(370, 270, "����");
		settextcolor(GREEN);
		outtextxy(160, 90, "��ʶ");
		settextcolor(YELLOW);
		outtextxy(445, 90, "�滮");
		ExMessage msg;
		loadimage(&star, "E:\\���������\\����\\����\\res\\�ǹ�.jpg");

		while (1) {
		if (peekmessage(&msg, EM_MOUSE)) {
			switch (msg.message) {
			case WM_LBUTTONDOWN:
				if (msg.x >= 160 && msg.x <= 240 && msg.y >= 270 && msg.y <= 340) {
					printf("a");
					setfillcolor(RED);
					for (a = 620; a >= 310; a--) {
						fillcircle(320, a, 15);
						Sleep(5);

					}
					cleardevice();
					initgraph(700, 700 );
					loadimage(&relation, "E:\\���������\\����\\����\\res\\��ϵ .jpg");
					putimage(0, 0, &relation);
					settextcolor(RED);
					settextstyle(30, 0, "����");
					outtextxy(260, 650, "����");
				}

						if (msg.x >= 370 && msg.x <= 430 && msg.y >= 270 && msg.y <= 340) {

							setfillcolor(YELLOW);
							for (a = 620; a >= 310; a--) {
								fillcircle(320, a, 15);
								Sleep(5);

							}
							initgraph(700, 700);
							settextcolor(YELLOW);
							settextstyle(30, 0, "����");
							outtextxy(0, 0, "github");
							system("start http://""www.github.com");

						}
						if (msg.x >= 160 && msg.x <= 240 && msg.y >= 90 && msg.y <= 160) {
							printf("a");
							setfillcolor(GREEN);
							for (a = 620; a >= 150; a--) {
								fillcircle(320, a, 15);
								Sleep(5);

							}
							cleardevice();
							initgraph(700, 700 );
							loadimage(&realize, "E:\\���������\\����\\����\\res\\רҵ��ʶ.jpg");
							putimage(0, 0, &realize);
							settextcolor(RED);
							settextstyle(30, 0, "����");
							outtextxy(260, 650, "����");
						}
						if (msg.x >= 440 && msg.x <= 510 && msg.y >= 90 && msg.y <= 160) {
							printf("a");
							setfillcolor(YELLOW);
							for (a = 620; a >= 150; a--) {
								fillcircle(320, a, 15);
								Sleep(5);

							}
							cleardevice();
							initgraph(700, 700);
							loadimage(&plan, "E:\\���������\\����\\����\\res\\�滮.jpg");
							putimage(0, 0, &plan);
							settextcolor(RED);
							settextstyle(30, 0, "����");
							outtextxy(260, 650, "����");
						}


						break;
			default:
				break;
					}
				}

			}
		
	


	return 0;
}