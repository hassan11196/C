	SMALL_RECT rect; // safer method than using system call
    COORD coord;
    coord.X = 150; // Defining our X and
    coord.Y = 741;  // Y size for buffer.

    rect.Top = 0;
    rect.Left = 0;
    rect.Bottom = coord.Y-1; // height for window
    rect.Right = coord.X-1;  // width for window

    HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE); // get handle
    SetConsoleScreenBufferSize(hwnd, coord);       // set buffer size
    SetConsoleWindowInfo(hwnd, TRUE, &rect);       // set window size

    printf("Resize window");
