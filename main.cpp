#include <iostream>
#include <string>

// Definicja klasy Samochod
class Samochod {
private:
    // Prywatne pola klasy - dost�pne tylko wewn�trz klasy Samochod
    std::string marka;
    std::string model;
    int rokProdukcji;
    float przebieg;

public:
    // Setter dla pola marka
    void setMarka(const std::string& m) {
        marka = m;
    }

    // Getter dla pola marka
    std::string getMarka() const {
        return marka;
    }

    // Setter dla pola model
    void setModel(const std::string& m) {
        model = m;
    }

    // Getter dla pola model
    std::string getModel() const {
        return model;
    }

    // Setter dla pola rokProdukcji
    void setRokProdukcji(int rok) {
        // Sprawdzenie, czy rok produkcji jest wi�kszy ni� 1886
        if (rok >= 1886) {
            rokProdukcji = rok;
        } else {
            std::cout << "Podano niepoprawny rok produkcji!\n";
        }
    }

    // Getter dla pola rokProdukcji
    int getRokProdukcji() const {
        return rokProdukcji;
    }

    // Setter dla pola przebieg
    void setPrzebieg(float p) {
        if (p >= 0) {  // Sprawdzamy, czy przebieg jest wi�kszy lub r�wny zero
            przebieg = p;
        } else {
            std::cout << "Przebieg nie mo�e by� ujemny!\n";
        }
    }

    // Getter dla pola przebieg
    float getPrzebieg() const {
        return przebieg;
    }

    // Funkcja do wy�wietlenia informacji o samochodzie
    void wyswietlInformacje() const {
        std::cout << "Marka: " << marka << "\n";
        std::cout << "Model: " << model << "\n";
        std::cout << "Rok produkcji: " << rokProdukcji << "\n";
        std::cout << "Przebieg: " << przebieg << " km\n";
    }
};

int main() {
    // Tworzymy obiekt klasy Samochod
    Samochod auto1;

    // Ustawiamy warto�ci dla obiektu auto1 za pomoc� setter�w
    auto1.setMarka("Toyota");
    auto1.setModel("Corolla");
    auto1.setRokProdukcji(2020);
    auto1.setPrzebieg(15000.5);

    // Wy�wietlamy informacje o samochodzie
    auto1.wyswietlInformacje();

    return 0;
}

