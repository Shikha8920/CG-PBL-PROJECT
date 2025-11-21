#include <graphics.h>
#include <conio.h>

void drawHappyFace(int x, int y, int r) {
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    fillellipse(x, y, r, r);

    // Eyes
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    fillellipse(x - 40, y - 30, 10, 10);
    fillellipse(x + 40, y - 30, 10, 10);

    // Cheeks
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    fillellipse(x - 40, y + 10, 15, 15);
    fillellipse(x + 40, y + 10, 15, 15);

    // Smile
    setcolor(BLACK);
    arc(x, y + 10, 200, 340, 50);
}

void drawSadFace(int x, int y, int r) {
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    fillellipse(x, y, r, r);

    // Eyes
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    fillellipse(x - 40, y - 30, 10, 10);
    fillellipse(x + 40, y - 30, 10, 10);

    // Sad mouth
    setcolor(BLACK);
    arc(x, y + 40, 20, 160, 50);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    setbkcolor(LIGHTBLUE);
    cleardevice();

    int x = getmaxx() / 2;
    int y = getmaxy() / 2;

    // Draw HAPPY FACE first
    drawHappyFace(x, y, 100);
    outtextxy(10, 10, (char*)"Press any key for SAD FACE...");
    getch();

    cleardevice();
    setbkcolor(LIGHTBLUE);
    drawSadFace(x, y, 100);
    outtextxy(10, 10, (char*)"Press any key to EXIT...");
    getch();

    closegraph();
    return 0;
}
