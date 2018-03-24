#include "fontsheet.hpp"

Sprite A = Sprite(
    "     "
    "  *  "
    " * * "
    "*   *"
    "*   *"
    "*****"
    "*   *"
    "*   *"
    "     ",
    5
);
Sprite B = Sprite(
    "     "
    "**** "
    "*   *"
    "*   *"
    "**** "
    "*   *"
    "*   *"
    "**** "
    "     ",
    5
);
Sprite C = Sprite(
    "     "
    " *** "
    "*   *"
    "*    "
    "*    "
    "*    "
    "*   *"
    " *** "
    "     ",
    5
);
Sprite D = Sprite(
    "     "
    "**** "
    "*   *"
    "*   *"
    "*   *"
    "*   *"
    "*   *"
    "**** "
    "     ",
    5
);
Sprite E = Sprite(
    "     "
    "*****"
    "*    "
    "*    "
    "**** "
    "*    "
    "*    "
    "*****"
    "     ",
    5
);
Sprite F = Sprite(
    "     "
    "*****"
    "*    "
    "*    "
    "**** "
    "*    "
    "*    "
    "*    "
    "     ",
    5
);
Sprite G = Sprite(
    "     "
    " ****"
    "*    "
    "*    "
    "*    "
    "*  **"
    "*   *"
    " ****"
    "     ",
    5
);
Sprite H = Sprite(
    "     "
    "*   *"
    "*   *"
    "*   *"
    "*****"
    "*   *"
    "*   *"
    "*   *"
    "     ",
    5
);
Sprite I = Sprite(
    "     "
    " *** "
    "  *  "
    "  *  "
    "  *  "
    "  *  "
    "  *  "
    " *** "
    "     ",
    5
);
Sprite J = Sprite(
    "     "
    "    *"
    "    *"
    "    *"
    "    *"
    "    *"
    "*   *"
    " *** "
    "     ",
    5
);
Sprite K = Sprite(
    "     "
    "*   *"
    "*  * "
    "* *  "
    "**   "
    "* *  "
    "*  * "
    "*   *"
    "     ",
    5
);
Sprite L = Sprite(
    "     "
    "*    "
    "*    "
    "*    "
    "*    "
    "*    "
    "*    "
    "*****"
    "     ",
    5
);
Sprite M = Sprite(
    "     "
    "*   *"
    "** **"
    "* * *"
    "* * *"
    "*   *"
    "*   *"
    "*   *"
    "     ",
    5
);
Sprite N = Sprite(
    "     "
    "*   *"
    "*   *"
    "**  *"
    "* * *"
    "*  **"
    "*   *"
    "*   *"
    "     ",
    5
);
Sprite O = Sprite(
    "     "
    " *** "
    "*   *"
    "*   *"
    "*   *"
    "*   *"
    "*   *"
    " *** "
    "     ",
    5
);
Sprite P = Sprite(
    "     "
    "**** "
    "*   *"
    "*   *"
    "**** "
    "*    "
    "*    "
    "*    "
    "     ",
    5
);
Sprite Q = Sprite(
    "     "
    " *** "
    "*   *"
    "*   *"
    "*   *"
    "* * *"
    "*  * "
    " ** *"
    "     ",
    5
);
Sprite R = Sprite(
    "     "
    "**** "
    "*   *"
    "*   *"
    "**** "
    "* *  "
    "*  * "
    "*   *"
    "     ",
    5
);
Sprite S = Sprite(
    "     "
    " *** "
    "*   *"
    "*    "
    " *** "
    "    *"
    "*   *"
    " *** "
    "     ",
    5
);
Sprite T = Sprite(
    "     "
    "*****"
    "  *  "
    "  *  "
    "  *  "
    "  *  "
    "  *  "
    "  *  "
    "     ",
    5
);
Sprite U = Sprite(
    "     "
    "*   *"
    "*   *"
    "*   *"
    "*   *"
    "*   *"
    "*   *"
    " *** "
    "     ",
    5
);
Sprite V = Sprite(
    "     "
    "*   *"
    "*   *"
    "*   *"
    "*   *"
    "*   *"
    " * * "
    "  *  "
    "     ",
    5
);
Sprite W = Sprite(
    "     "
    "*   *"
    "*   *"
    "*   *"
    "* * *"
    "* * *"
    "** **"
    "*   *"
    "     ",
    5
);
Sprite X = Sprite(
    "     "
    "*   *"
    "*   *"
    " * * "
    "  *  "
    " * * "
    "*   *"
    "*   *"
    "     ",
    5
);
Sprite Y = Sprite(
    "     "
    "*   *"
    "*   *"
    " * * "
    "  *  "
    "  *  "
    "  *  "
    "  *  "
    "     ",
    5
);
Sprite Z = Sprite(
    "     "
    "*****"
    "    *"
    "   * "
    "  *  "
    " *   "
    "*    "
    "*****"
    "     ",
    5
);
Sprite UNKNOWN = Sprite(
    "     "
    "*****"
    "*   *"
    "*   *"
    "*   *"
    "*   *"
    "*   *"
    "*****"
    "     ",
    5
);

Sprite characters[128] = {
    UNKNOWN,
    UNKNOWN,
    UNKNOWN,
    UNKNOWN,
    UNKNOWN,
    UNKNOWN,
    UNKNOWN,
    UNKNOWN,
    UNKNOWN,
    UNKNOWN,
    UNKNOWN,
    UNKNOWN,
    UNKNOWN,
    UNKNOWN,
    UNKNOWN,
    UNKNOWN,
    UNKNOWN,
    UNKNOWN,
    UNKNOWN,
    UNKNOWN,
    UNKNOWN,
    UNKNOWN,
    UNKNOWN,
    UNKNOWN,
    UNKNOWN,
    UNKNOWN,
    UNKNOWN,
    UNKNOWN,
    UNKNOWN,
    UNKNOWN,
    UNKNOWN,
    UNKNOWN,
    Sprite(
        "  "
        "  "
        "  "
        "  "
        "  "
        "  "
        "  "
        "  "
        "  ",
        2
    ),
    Sprite(
        " "
        "*"
        "*"
        "*"
        "*"
        "*"
        " "
        "*"
        " ",
        1
    ),
    Sprite(
        "   "
        "* *"
        "* *"
        "   "
        "   "
        "   "
        "   "
        "   "
        "   ",
        3
    ),
    Sprite(
        "     "
        " * * "
        " * * "
        "*****"
        " * * "
        "*****"
        " * * "
        " * * "
        "     ",
        5
    ),
    Sprite(
        "  *  "
        " *** "
        "* * *"
        "* *  "
        " *** "
        "  * *"
        "* * *"
        " *** "
        "  *  ",
        5
    ),
    Sprite(
        "     "
        "** * "
        "** * "
        "  *  "
        "  *  "
        " * **"
        " * **"
        "     ",
        5
    ),
    Sprite(
        "     "
        " **  "
        "*  * "
        "*  * "
        " **  "
        "*  * "
        "*   *"
        " ****"
        "     ",
        5
    ),
    Sprite(
        "  "
        " *"
        "* "
        "  "
        "  "
        "  "
        "  "
        "  "
        "  ",
        2
    ),
    Sprite(
        "   "
        "  *"
        " * "
        "*  "
        "*  "
        "*  "
        " * "
        "  *"
        "   ",
        3
    ),
    Sprite(
        "   "
        "*  "
        " * "
        "  *"
        "  *"
        "  *"
        " * "
        "*  "
        "   ",
        3
    ),
    Sprite(
        "     "
        "  *  "
        "* * *"
        " *** "
        "  *  "
        " *** "
        "* * *"
        "  *  "
        "     ",
        5
    ),
    Sprite(
        "     "
        "     "
        "  *  "
        "  *  "
        "*****"
        "  *  "
        "  *  "
        "     "
        "     ",
        5
    ),
    Sprite(
        " "
        " "
        " "
        " "
        " "
        " "
        " "
        "*"
        "*",
        1
    ),
    Sprite(
        "     "
        "     "
        "     "
        "     "
        "*****"
        "     "
        "     "
        "     "
        "     ",
        5
    ),
    Sprite(
        " "
        " "
        " "
        " "
        " "
        " "
        " "
        "*"
        " ",
        1
    ),
    Sprite(
        "   "
        "  *"
        "  *"
        " * "
        " * "
        " * "
        "*  "
        "*  "
        "   ",
        3
    ),
    Sprite(
        "     "
        " *** "
        "*   *"
        "*  **"
        "* * *"
        "**  *"
        "*   *"
        " *** "
        "     ",
        5
    ),
    Sprite(
        "     "
        "  *  "
        " **  "
        "  *  "
        "  *  "
        "  *  "
        "  *  "
        " *** "
        "     ",
        5
    ),
    Sprite(
        "     "
        " *** "
        "*   *"
        "    *"
        "  ** "
        " *   "
        "*    "
        "*****"
        "     ",
        5
    ),
    Sprite(
        "     "
        "*****"
        "    *"
        "   * "
        "  ** "
        "    *"
        "*   *"
        " *** "
        "     ",
        5
    ),
    Sprite(
        "     "
        "   * "
        "  ** "
        " * * "
        "*  * "
        "*****"
        "   * "
        "   * "
        "     ",
        5
    ),
    Sprite(
        "     "
        "*****"
        "*    "
        "**** "
        "    *"
        "    *"
        "*   *"
        " *** "
        "     ",
        5
    ),
    Sprite(
        "     "
        "  ***"
        " *   "
        "*    "
        "**** "
        "*   *"
        "*   *"
        " *** "
        "     ",
        5
    ),
    Sprite(
        "     "
        "*****"
        "    *"
        "   * "
        "  *  "
        " *   "
        " *   "
        " *   "
        "     ",
        5
    ),
    Sprite(
        "     "
        " *** "
        "*   *"
        "*   *"
        " *** "
        "*   *"
        "*   *" 
        " *** "
        "     ",
        5
    ),
    Sprite(
        "     "
        " *** "
        "*   *"
        "*   *"
        " ****"
        "    *"
        "   * "
        "***  "
        "     ",
        5
    ),
    Sprite(
        " "
        " "
        "*"
        " "
        " "
        " "
        " "
        "*"
        " ",
        1
    ),
    Sprite(
        " "
        " "
        "*"
        " "
        " "
        " "
        " "
        "*"
        "*",
        1
    ),
    Sprite(
        "    "
        "   *"
        "  * "
        " *  "
        "*   "
        " *  "
        "  * "
        "   *"
        "    ",
        4
    ),
    Sprite(
        "     "
        "     "
        "     "
        "*****"
        "     "
        "*****"
        "     "
        "     "
        "     ",
        5
    ),
    Sprite(
        "    "
        "*   "
        " *  "
        "  * "
        "   *"
        "  * "
        " *  "
        "*   "
        "    ",
        4
    ),
    Sprite(
        "     "
        " *** "
        "*   *"
        "   * "
        "  *  "
        "  *  "
        "     "
        "  *  "
        "     ",
        5
    ),
    Sprite(
        "     "
        " *** "
        "*   *"
        "*   *"
        "* * *"
        "** **"
        "* *  "
        "*   *"
        " *** "
        "     ",
        5
    ),
    A,
    B,
    C,
    D,
    E,
    F,
    G,
    H,
    I,
    J,
    K,
    L,
    M,
    N,
    O,
    P,
    Q,
    R,
    S,
    T,
    U,
    V,
    W,
    X,
    Y,
    Z,
    Sprite(
        "   "
        " **"
        "*  "
        "*  "
        "*  "
        "*  "
        "*  "
        " **"
        "   ",
        3
    ),
    Sprite(
        "   "
        "*  "
        "*  "
        " * "
        " * "
        " * "
        "  *"
        "  *"
        "   ",
        3
    ),
    Sprite(
        "   "
        "** "
        "  *"
        "  *"
        "  *"
        "  *"
        "  *"
        "** "
        "   ",
        3
    ),
    Sprite(
        "     "
        "  *  "
        " * * "
        "*   *"
        "     "
        "     "
        "     "
        "     "
        "     ",
        5
    ),
    Sprite(
        "     "
        "     "
        "     "
        "     "
        "     "
        "     "
        "     "
        "*****"
        "     ",
        5
    ),
    Sprite(
        "  "
        "* "
        " *"
        "  "
        "  "
        "  "
        "  "
        "  "
        "  ",
        2
    ),
    A,
    B,
    C,
    D,
    E,
    F,
    G,
    H,
    I,
    J,
    K,
    L,
    M,
    N,
    O,
    P,
    Q,
    R,
    S,
    T,
    U,
    V,
    W,
    X,
    Y,
    Z,
    Sprite(
        "   "
        "  *"
        " * "
        " * "
        "*  "
        " * "
        " * "
        "  *"
        "   ",
        3
    ),
    Sprite(
        " "
        "*"
        "*"
        "*"
        "*"
        "*"
        "*"
        "*"
        " ",
        1
    ),
    Sprite(
        "   "
        "*  "
        " * "
        " * "
        "  *"
        " * "
        " * "
        "*  "
        "   ",
        3
    ),
    Sprite(
        "    "
        "    "
        "    "
        " * *"
        "* * "
        "    "
        "    "
        "    "
        "    ",
        4
    )
};