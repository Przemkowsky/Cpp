#include <iostream>
#include <cmath>
#include <iomanip> 
using namespace std;

float Ara_dlugosc_wektora(float Ara_x, float Ara_y) {
    return sqrt(Ara_x * Ara_x + Ara_y * Ara_y);
}

    float Ara_kat_miedzy_wektorami(float Ara_a, float Ara_b, float Ara_c, float Ara_d) {
    float Ara_iloczyn_skalarny = Ara_a * Ara_c + Ara_b * Ara_d;
    float Ara_dv1 = Ara_dlugosc_wektora(Ara_a, Ara_b);
    float Ara_dv2 = Ara_dlugosc_wektora(Ara_c, Ara_d);
    float Ara_cos_alfa = Ara_iloczyn_skalarny / (Ara_dv1 * Ara_dv2);
    float Ara_alfa_radiany = acos(Ara_cos_alfa);
    float Ara_alfa_stopnie = Ara_alfa_radiany * 180.0 / M_PI;
    return Ara_alfa_stopnie;
}

int main() {
    float Ara_xa, Ara_ya, Ara_xb, Ara_yb, Ara_xc, Ara_yc, Ara_xd, Ara_yd;
    cout << "WprowadŸ wspolrzêdne punktu A (xa, ya): ";
    cin >> Ara_xa >> Ara_ya;
    cout << "WprowadŸ wspolrzêdne punktu B (xb, yb): ";
    cin >> Ara_xb >> Ara_yb;
    cout << "WprowadŸ wspolrzêdne punktu C (xc, yc): ";
    cin >> Ara_xc >> Ara_yc;
    cout << "WprowadŸ wspolrzêdne punktu D (xd, yd): ";
    cin >> Ara_xd >> Ara_yd;

    cout << "Punkty po wczytaniu: " << endl;
    cout << "A(" << Ara_xa << ", " << Ara_ya << "), ";
    cout << "B(" << Ara_xb << ", " << Ara_yb << "), ";
    cout << "C(" << Ara_xc << ", " << Ara_yc << "), ";
    cout << "D(" << Ara_xd << ", " << Ara_yd << ")" << endl;

    float Ara_AB_x = Ara_xb - Ara_xa;
    float Ara_AB_y = Ara_yb - Ara_ya;
    float Ara_CD_x = Ara_xd - Ara_xc;
    float Ara_CD_y = Ara_yd - Ara_yc;

    cout << "Wektory po obliczeniu: " << endl;
    cout << "AB = [" << Ara_AB_x << ", " << Ara_AB_y << "]" << endl;
    cout << "CD = [" << Ara_CD_x << ", " << Ara_CD_y << "]" << endl;

    float Ara_kat = Ara_kat_miedzy_wektorami(Ara_AB_x, Ara_AB_y, Ara_CD_x, Ara_CD_y);

    cout << "Kat miedzy wektorami AB i CD wynosi: " << fixed << setprecision(1) << Ara_kat << "°" << endl;

    return 0;
}

