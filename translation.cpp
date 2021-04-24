/*
This Source Code Form is subject to the
terms of the Mozilla Public License, v.
2.0. If a copy of the MPL was not
distributed with this file, You can
obtain one at
http://mozilla.org/MPL/2.0/.
*/
/*
    MaSzyna EU07 locomotive simulator
    Copyright (C) 2001-2004  Marcin Wozniak, Maciej Czapkiewicz and others
*/

#include "stdafx.h"
#include "translation.h"

#include "Globals.h"

namespace locale {

void
init() {
    // TODO: import localized strings from localization files
    std::unordered_map<std::string, std::vector<std::string>> stringmap;

    stringmap.insert(
    { "en",
      {
        "Driving Aid",
        "Throttle: %3d+%d %c%s",
        " Speed: %d km/h (limit %d km/h%s)%s",
        ", new limit: %d km/h in %.1f km",
        " Grade: %.1f%%%%",
        "Brakes: %5.1f+%-2.0f%c%s",
        " Pressure: %.2f kPa (train pipe: %.2f kPa)",
        "!ALERTER! ",
        "!SHP!",
        " Loading/unloading in progress (%d s left)",
        " Another vehicle ahead (distance: %.1f m)",

        "Scenario",
        "Assignment",
        "Current task:",
        "Wait for orders",
        "Start the engine",
        "Shut down the engine",
        "Change direction",
        "Couple to consist ahead",
        "Uncouple %s",
        "the engine",
        "the engine plus the next vehicle",
        "the engine plus %d next vehicles",
        "the engine plus %d next vehicles",
        "Shunt according to signals",
        "Loose shunt according to signals",
        "Drive according to signals and timetable",
        "Bank consist ahead",

        "Hints",
        "Switch on battery",
        "Switch off battery",
        "Switch on radio",
        "Switch off radio",
        "Tune into channel %.0f",
        "Switch on oil pump",
        "Switch off oil pump",
        "Switch on fuel pump",
        "Switch off fuel pump",
        "Switch pantograph 3-way valve to primary air source",
        "Switch pantograph 3-way valve to auxiliary air source",
        "Switch on pantograph compressor",
        "Switch off pantograph compressor",
        "Enable pantographs valve",
        "Disable pantographcs valve",
        "Raise pantograph A",
        "Lower pantograph A",
        "Raise pantograph B",
        "Lower pantograph B",
        "Switch on converter",
        "Switch off converter",
        "Reset converter overload relay",
        "Reset main circuit ground relay",
        "Reset traction motors overload relay",
        "Close line breaker",
        "Open line breaker",
        "Switch on compressor",
        "Switch off compressor",
        "Switch on front motor blowers",
        "Switch off front motor blowers",
        "Switch on rear motor blowers",
        "Switch off rear motor blowers",
        "Apply spring brake",
        "Release spring brake",
        "Apply manual brake",
        "Release manual brake",
        "Set engine to idle",
        "Set master controller to series mode",
        "Switch on water heater",
        "Switch off water heater",
        "Switch on water heater breaker",
        "Switch off water heater breaker",
        "Switch on water pump",
        "Switch off water pump",
        "Switch on water pump breaker",
        "Switch off water pump breaker",
        "Link water circuits",
        "Unlink water circuits",
        "Wait for warm up to complete",
        "Set master controller to neutral",
        "Set master controller to position %.0f",
        "Set brake controller to pipe filling mode",
        "Release train brake",
        "Apply train brake",
        "Set reverser to forward",
        "Set reverser to reverse",
        "Switch reverser to opposite direction",
        "Set reverser to neutral",
        "Wait for main reservoir to fill",
        "Wait for sufficient air pressure in pantograph subsystem",
        "Switch on sanding",
        "Switch off sanding",
        "Switch on door locks",
        "Switch on departure signal",
        "Switch off departure signal",
        "Open doors",
        "Close doors",
        "Open doors",
        "Close doors",
        "Grant permit to open doors",
        "Revoke permit to open doors",
        "Grant permit to open doors",
        "Revoke permit to open doors",
        "Sound the horn",
        "Switch off horn",
        "Switch on consist lights",
        "Switch off consist lights",
        "Switch on consist heating",
        "Switch off consist heating",
        "Acknowledge alerter",
        "Attach coupling adapter",
        "Remove coupling adapter",
        "Switch off field shunting",
        "Reduce tractive force",
        "Increase tractive force",
        "Reduce braking force",
        "Increase braking force",
        "Release train brakes",
        "Lap train brake",
        "Apply independent brake",
        "Release independent brake",
        "Apply anti slip brake",
        "Wait for passenger exchange to complete",
        "Wait for departure time",
        "Switch on Pc 1 head lamp code",
        "Switch on Pc 2 head lamp code",
        "Switch on Pc 5 tail lamp code",
        "Switch on Tb 1 head lamp code",
        "Switch off lights",
        "Actuate",
        "Stop actuating",
        "Apply tractive force to compress buffers",

        "%-*.*s    Time: %d:%02d:%02d", // HACK: some manual padding to account for longer 'time' equivalent in polish version
        "Timetable",
        "(no timetable)",
        "Consist weight: %d t (specified) %d t (actual)\nConsist length: %d m",

        "Transcripts",

        "Simulation Paused",
        "Resume",
        "Quit",

        "Name: %s%s\nLoad: %.0f %s\nStatus: %s%s\nCouplers:\n front: %s\n rear:  %s",
        ", owned by: ",
        "none",
        "Devices: %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%s%s\nPower transfers: %.0f@%.0f%s[%.0f]%s%.0f@%.0f :: %.0f@%.0f%s[%.0f]%s%.0f@%.0f",
        " R",
        " oil pressure: ",
        "Controllers:\n master: %d(%d), secondary: %s\nEngine output: %.1f, current: %.0f\nRevolutions:\n engine: %.0f, motors: %.0f\n engine fans: %.0f, motor fans: %.0f+%.0f, cooling fans: %.0f+%.0f",
        " (shunt mode)",
        "\nTemperatures:\n engine: %.2f, oil: %.2f, water: %.2f%c%.2f",
        "Brakes:\n train: %.2f (mode: %d, delay: %s, load flag: %d)\n independent: %.2f (%.2f), manual: %.2f, spring: %.2f\nBrake cylinder pressures:\n train: %.2f, independent: %.2f, status: 0x%.2x\nPipe pressures:\n brake: %.2f (hat: %.2f), main: %.2f, control: %.2f\nTank pressures:\n auxiliary: %.2f, main: %.2f, control: %.2f",
        " pantograph: %.2f%cMT",
        "Forces:\n tractive: %.1f, brake: %.1f, friction: %.2f%s\nAcceleration:\n tangential: %.2f, normal: %.2f (path radius: %s)\nVelocity: %.2f, distance traveled: %.2f\nPosition: [%.2f, %.2f, %.2f]",
        "Power use:\n drawn: %.1f kWh, returned: %.1f kWh, balance: %.1f kWh",
        "\n pantograph %d: drawing from: [%s, %s] through: [%.2f, %.2f, %.2f]",

        "master controller",
        "master controller",
        "second controller",
        "shunt mode power",
        "tempomat",
        "tempomat",
        "tempomat (speed)",
        "tempomat (speed)",
        "tempomat (power)",
        "tempomat (power)",
        "tempomat (speed)",
        "tempomat (speed)",
        "tempomat (speed)",
        "tempomat (speed)",
        "tempomat (speed)",
        "tempomat (speed)",
        "tempomat (speed)",
        "tempomat (speed)",
        "tempomat (speed)",
        "tempomat (speed)",
        "distance counter",
        "reverser",
        "reverser forward",
        "reverser neutral",
        "reverser backward",
        "train brake",
        "independent brake",
        "manual brake",
        "emergency brake",
        "brake acting speed",
        "brake acting speed: cargo",
        "brake acting speed: rapid",
        "brake operation mode",
        "motor overload relay threshold",
        "water pump",
        "water pump breaker",
        "water heater",
        "water heater breaker",
        "water circuits link",
        "fuel pump",
        "oil pump",
        "motor blowers A",
        "motor blowers B",
        "all motor blowers",
        "cooling fans",
        "line breaker",
        "line breaker",
        "alerter",
        "independent brake releaser",
        "spring brake",
        "spring brake",
        "spring brake",
        "train brake",
        "train brake",
        "train brake",
        "electro-pneumatic brake",
        "sandbox",
        "wheelspin brake",
        "horn",
        "low tone horn",
        "high tone horn",
        "whistle",
        "motor overload relay reset",
        "converter overload relay reset",
        "relay reset",
        "relay reset",
        "relay reset",
        "motor connectors",
        "left door (permit)",
        "right door (permit)",
        "door (permit)",
        "left door",
        "right door",
        "left door (open)",
        "right door (open)",
        "left door (close)",
        "right door (close)",
        "all doors (open)",
        "all doors (close)",
        "doorstep",
        "door control mode",
        "departure signal",
        "upper headlight",
        "left headlight",
        "right headlight",
        "headlights dimmer",
        "left marker light",
        "right marker light",
        "light pattern",
        "rear upper headlight",
        "rear right headlight",
        "rear left headlight",
        "rear right marker light",
        "rear left marker light",
        "compressor",
        "local compressor",
        "converter",
        "local converter",
        "converter",
        "line breaker",
        "radio",
        "radio channel",
        "radio channel",
        "radio channel",
        "radiostop test",
        "radiostop",
        "radio call 3",
        "radio volume",
        "radio volume",
        "radio volume",
        "pantograph A",
        "pantograph B",
        "pantograph A",
        "pantograph B",
        "all pantographs",
        "selected pantograph",
        "selected pantograph",
        "selected pantograph",
        "selected pantograph",
        "pantograph compressor",
        "pantograph 3-way valve",
        "heating",
        "braking indicator",
        "door locking",
        "current indicator source",
        "instrument light",
        "dashboard light",
        "timetable light",
        "interior light",
        "interior light dimmer",
        "compartment lights",
        "compartment lights",
        "compartment lights",
        "battery",
        "battery",
        "battery",
        "coupling",
        "interactive part",
        "interactive part",
        "interactive part",
        "interactive part",
        "interactive part",
        "interactive part",
        "interactive part",
        "interactive part",
        "interactive part",
        "interactive part"
      }
    } );

    stringmap.insert(
    { "pl",
      {
        "Pomocnik",
        "Nastawnik: %3d+%d %c%s",
        " Predkosc: %d km/h (limit %d km/h%s)%s",
        ", nowy limit: %d km/h za %.1f km",
        "  Nachylenie: %.1f%%%%",
        "Hamulce: %5.1f+%-2.0f%c%s",
        " Cisnienie: %.2f kPa (przewod glowny: %.2f kPa)",
        "!CZUWAK!  ",
        "!SHP!",
        "  Wymiana pasazerska (do zakonczenia %d s)",
        "  Inny pojazd na drodze (odleglosc: %.1f m)",

        "Scenariusz",
        "Zlecenie",
        "Biezace zadanie:",
        "Oczekiwac dalszych polecen",
        "Przygotowac pojazd do jazdy",
        "Wylaczyc pojazd",
        "Zmienic kierunek jazdy",
        "Sprzac sie ze skladem z przodu",
        "Odpiac %s",
        "pojazd prowadzacy",
        "pojazd prowadzacy plus kolejny",
        "pojazd prowadzacy plus %d kolejne",
        "pojazd prowadzacy plus %d kolejnych",
        "Prowadzic manewry wedlug sygnalow",
        "Prowadzic manewry przetaczania odrzutem",
        "Prowadzic sklad wedlug sygnalow i rozkladu",
        "Popychac sklad z przodu",

        "Podpowiedzi",
        "Zalaczyc akumulatory",
        "Wylaczyc akumulatory",
        "Zalaczyc radio",
        "Wylaczyc radio",
        "Ustawic radio na kanal %.0f",
        "Zalaczyc pompe oleju",
        "wylaczyc pompe oleju",
        "Zalaczyc pompe paliwa",
        "wylaczyc pompe paliwa",
        "Ustawic kurek trojdrogowy w pozycji napelniania zbiornika glownego",
        "Ustawic kurek trojdrogowy w pozycji napelniania cylindrow pantografow",
        "Zalaczyc sprezarke pantografow",
        "Wylaczyc sprezarke pantografow",
        "Otworzyc zawor pantografow",
        "Zamknac zawor pantografow",
        "Podniesc pantograf A",
        "Opuscic pantograf A",
        "Podniesc pantograf B",
        "Opuscic pantograf B",
        "Zalaczyc przetwornice",
        "Wylaczyc przetwornice",
        "Odblokowac przekaznik nadmiarowy przetwornicy",
        "Odblokowac przekaznik roznicowy obwodu glownego",
        "Odblokowac przekaznik nadmiarowy silnikow trakcyjnych",
        "Zamknac wylacznik szybki",
        "Otworzyc wylacznik szybki",
        "Zalaczyc sprezarke",
        "Wylaczyc sprezarke",
        "Zalaczyc wentylatory przednich silnikow trakcyjnych",
        "Wylaczyc wentylatory przednich silnikow trakcyjnych",
        "Zalaczyc wentylatory tylnych silnikow trakcyjnych",
        "Wylaczyc wentylatory tylnych silnikow trakcyjnych",
        "Zalaczyc hamulec sprezynowy",
        "Zwolnic hamules sprezynowy",
        "Zalaczyc hamulec reczny",
        "Zwolnic hamulec reczny",
        "Ustawic nastawnik jazdy na pozycje biegu jalowego",
        "Ustawic nastawnik jazdy na pozycje szeregowa",
        "Zalaczyc podgrzewacz wody",
        "Wylaczyc podgrzewacz wody",
        "Zalaczyc bezpiecznik podgrzewacza wody",
        "Wylaczyc bezpiecznik podgrzewacza wody",
        "Zalaczyc pompe wody",
        "Wylaczyc pompe wody",
        "Zalaczyc bezpiecznik pompy wody",
        "Wylaczyc bezpiecznik pompy wody",
        "Polaczyc obiegi wody",
        "Rozlaczyc obiegi wody",
        "Zaczekac na osiagniecie temperatury roboczej",
        "Ustawic nastawnik jazdy na pozycje neutralna",
        "Ustawic nastawnik jazdy na pozycje %.0f",
        "Ustawic hamulec zespolony na pozycje popelnienia przewodu glownego",
        "Ustawic hamulec zespolony na pozycje jazdy",
        "Zalaczyc hamulec zespolony",
        "Ustawic nastawnik kierunku na jazde naprzod",
        "Ustawic nastawnik kierunku na jazde wstecz",
        "Zmienic kierunek jazdy na przeciwny",
        "Ustawic nastawnik kierunku na pozycje neutralna",
        "Zaczekac na napelnienie zbiornika glownego",
        "Zaczekac na osiagniecie cisnienia potrzebnego do podniesienia pantografow",
        "Zalaczyc piaskowanie",
        "Wylaczyc piaskowanie",
        "Zalaczyc blokade drzwi",
        "Zalaczyc sygnal odjazdu",
        "Wylaczyc sygnal odjazdu",
        "Otworzyc drzwi",
        "Zamknac drzwi",
        "Otworzyc drzwi",
        "Zamknac drzwi",
        "Podac zezwolenie na otwarcie drzwi",
        "Cofnac zezwolenie na otwarcie drzwi",
        "Podac zezwolenie na otwarcie drzwi",
        "Cofnac zezwolenie na otwarcie drzwi",
        "Podac sygnal dzwiekowy",
        "Wylaczyc syrene",
        "Zalaczyc oswietlenie pociagu",
        "Wylaczyc oswietlenie pociagu",
        "Zalaczyc ogrzewanie pociagu",
        "wylaczyc ogrzewanie pociagu",
        "Zbic czuwak",
        "Zalozyc polsprzeg",
        "Zdjac polsprzeg",
        "Wylaczyc bocznikowanie",
        "Zmniejszyc sile pociagowa",
        "Zwiekszyc sile pociagowa",
        "Zmniejszyc sile hamujaca",
        "Zwiekszyc sile hamujaca",
        "Odhamowac sklad",
        "Utrzymac sile hamujaca",
        "Zalaczyc hamulec lokomotywy",
        "Zwolnic hamulec lokomotywy",
        "Zalaczyc hamulec przeciwposlizgowy",
        "Zaczekac na zakonczenie wymiany pasazerskiej",
        "Zaczekac na godzine odjazdu",
        "Zapalic sygnal jazdy rozkladowej Pc 1",
        "Zapalic sygnal jazdy rozkladowej Pc 2",
        "Zapalic sygnal konca pociagu Pc 5",
        "Zapalic sygnal jazdy manewrowej Tb 1",
        "Wylaczyc swiatla",
        "Zalaczyc odluzniacz",
        "Wylaczyc odluzniacz",
        "Aplikowac sile trakcyjna celem scisniecia skladu",

        "%-*.*s Godzina: %d:%02d:%02d",
        "Rozklad jazdy",
        "(brak rozkladu)",
        "Brutto: %d t (rozkladowe) %d t (rzeczywiste)\nDlugosc pociagu: %d m",

        "Transkrypcje",

        "Symulacja wstrzymana",
        "Wznow",
        "Zakoncz",

        "Nazwa: %s%s\nLadunek: %.0f %s\nStatus: %s%s\nSprzegi:\n przedni: %s\n tylny:   %s",
        ", wlasciciel: ",
        "wolny",
        "Urzadzenia: %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%s%s\nTransfer pradow: %.0f@%.0f%s[%.0f]%s%.0f@%.0f :: %.0f@%.0f%s[%.0f]%s%.0f@%.0f",
        " R",
        " cisn.oleju: ",
        "Nastawniki:\n glowny: %d(%d), dodatkowy: %s\nMoc silnika: %.1f, prad silnika: %.0f\nObroty:\n silnik: %.0f, motory: %.0f\n went.silnika: %.0f, went.motorow: %.0f+%.0f, went.chlodnicy: %.0f+%.0f",
        " (tryb manewrowy)",
        "\nTemperatury:\n silnik: %.2f, olej: %.2f, woda: %.2f%c%.2f",
        "Hamulce:\n zespolony: %.2f (tryb: %d, nastawa: %s, ladunek: %d)\n pomocniczy: %.2f (%.2f), postojowy: %.2f, sprezynowy: %.2f\nCisnienie w cylindrach:\n zespolony: %.2f, pomocniczy: %.2f, status: 0x%.2x\nCisnienia w przewodach:\n glowny: %.2f (kapturek: %.2f), zasilajacy: %.2f, kontrolny: %.2f\nCisnienia w zbiornikach:\n pomocniczy: %.2f, glowny: %.2f, sterujacy: %.2f",
        " pantograf: %.2f%cZG",
        "Sily:\n napedna: %.1f, hamowania: %.1f, tarcie: %.2f%s\nPrzyspieszenia:\n styczne: %.2f, normalne: %.2f (promien: %s)\nPredkosc: %.2f, pokonana odleglosc: %.2f\nPozycja: [%.2f, %.2f, %.2f]",
        "Zuzycie pradu:\n pobrane: %.1f kWh, oddane: %.1f kWh, zuzyte: %.1f kWh",
        "\n pantograf %d: zrodla: [%s, %s] przeslo: [%.2f, %.2f, %.2f]",

        "nastawnik jazdy",
        "nastawnik jazdy",
        "nastawnik dodatkowy",
        "sterowanie analogowe",
        "tempomat",
        "tempomat",
        "tempomat (predkosc)",
        "tempomat (predkosc)",
        "tempomat (moc)",
        "tempomat (moc)",
        "tempomat (predkosc)",
        "tempomat (predkosc)",
        "tempomat (predkosc)",
        "tempomat (predkosc)",
        "tempomat (predkosc)",
        "tempomat (predkosc)",
        "tempomat (predkosc)",
        "tempomat (predkosc)",
        "tempomat (predkosc)",
        "tempomat (predkosc)",
        "miernik odleglosci",
        "nastawnik kierunku",
        "kierunek naprzod",
        "kierunek neutralny",
        "kierunek wstecz",
        "hamulec zespolony",
        "hamulec pomocniczy",
        "hamulec reczny",
        "hamulec bezpieczenstwa",
        "nastawa hamulca",
        "nastawa hamulca: towarowy",
        "nastawa hamulca: pospieszny",
        "tryb pracy hamulca",
        "zakres pradu rozruchu",
        "pompa wody",
        "wylacznik samoczynny pompy wody",
        "podgrzewacz wody",
        "wylacznik samoczynny podgrzewacza wody",
        "zawor polaczenia obiegow wody",
        "pompa paliwa",
        "pompa oleju",
        "wentylatory silnikow trakcyjnych A",
        "wentylatory silnikow trakcyjnych B",
        "wszystkie wentylatory silnikow trakcyjnych",
        "wentylatory oporow rozruchowych",
        "wylacznik szybki",
        "wylacznik szybki",
        "czuwak",
        "odluzniacz",
        "hamulec sprezynowy",
        "hamulec sprezynowy",
        "hamulec sprezynowy",
        "hamulec zespolony",
        "hamulec zespolony",
        "hamulec zespolony",
        "hamulec elektropneumatyczny",
        "piasecznica",
        "hamulec przeciwposlizgowy",
        "syrena",
        "syrena (ton niski)",
        "syrena (ton wysoki)",
        "gwizdawka",
        "przekaznik nadmiarowy silnikow trakcyjnych",
        "przekaznik nadmiarowy przetwornicy",
        "przekazniki nadmiarowe",
        "przekazniki nadmiarowe",
        "przekazniki nadmiarowe",
        "styczniki liniowe",
        "drzwi lewe (zezwol)",
        "drzwi prawe (zezwol)",
        "drzwi (zezwol)",
        "drzwi lewe",
        "drzwi prawe",
        "drzwi lewe (otworz)",
        "drzwi prawe (otworz)",
        "drzwi lewe (zamknij)",
        "drzwi prawe (zamknij)",
        "drzwi (otworz)",
        "drzwi (zamknij)",
        "stopien drzwi",
        "tryb sterowania drzwiami",
        "sygnal odjazdu",
        "reflektor gorny",
        "reflektor lewy",
        "reflektor prawy",
        "przyciemnienie reflektorow",
        "sygnal lewy",
        "sygnal prawy",
        "programator swiatel",
        "tylny reflektor gorny",
        "tylny reflektor prawy",
        "tylny reflektor lewy",
        "tylny sygnal prawy",
        "tylny sygnal lewy",
        "sprezarka",
        "sprezarka lokalna",
        "przetwornica",
        "przetwornica lokalna",
        "przetwornica",
        "wylacznik szybki",
        "radio",
        "kanal radia",
        "kanal radia",
        "kanal radia",
        "test radiostopu",
        "radiostop",
        "zew 3",
        "glosnosc radia",
        "glosnosc radia",
        "glosnosc radia",
        "pantograf A",
        "pantograf B",
        "pantograf A",
        "pantograf B",
        "wszystkie pantografy",
        "wybrany pantograf",
        "wybrany pantograf",
        "wybrany pantograf",
        "wybrany pantograf",
        "sprezarka pantografow",
        "kurek trojdrogowy pantografow",
        "ogrzewanie pociagu",
        "sygnalizacja hamowania",
        "blokada drzwi",
        "prady drugiego czlonu",
        "oswietlenie przyrzadow",
        "oswietlenie pulpitu",
        "oswietlenie rozkladu jazdy",
        "oswietlenie kabiny",
        "przyciemnienie oswietlenia kabiny",
        "oswietlenie przedzialow",
        "oswietlenie przedzialow",
        "oswietlenie przedzialow",
        "bateria",
        "bateria",
        "bateria",
        "sprzeg",
        "element ruchomy",
        "element ruchomy",
        "element ruchomy",
        "element ruchomy",
        "element ruchomy",
        "element ruchomy",
        "element ruchomy",
        "element ruchomy",
        "element ruchomy",
        "element ruchomy"
      }
    } );

    auto lookup { stringmap.find( Global.asLang ) };
    if( lookup == stringmap.end() ) {
        lookup = stringmap.find( "en" );
    }

    locale::strings = lookup->second;

    // prepare cab controls translation table
    {
        std::vector<std::string> cabcontrols = {
            "mainctrl:",
            "jointctrl:",
            "scndctrl:",
            "shuntmodepower:",
            "tempomat_sw:",
            "tempomatoff_sw:",
            "speedinc_bt:",
            "speeddec_bt:",
            "speedctrlpowerinc_bt:",
            "speedctrlpowerdec_bt:",
            "speedbutton0:",
            "speedbutton1:",
            "speedbutton2:",
            "speedbutton3:",
            "speedbutton4:",
            "speedbutton5:",
            "speedbutton6:",
            "speedbutton7:",
            "speedbutton8:",
            "speedbutton9:",
            "distancecounter_sw:",
            "dirkey:",
            "dirforward_bt:",
            "dirneutral_bt:",
            "dirbackward_bt:",
            "brakectrl:",
            "localbrake:",
            "manualbrake:",
            "alarmchain:",
            "brakeprofile_sw:",
            "brakeprofileg_sw:",
            "brakeprofiler_sw:",
            "brakeopmode_sw:",
            "maxcurrent_sw:",
            "waterpump_sw:",
            "waterpumpbreaker_sw:",
            "waterheater_sw:",
            "waterheaterbreaker_sw:",
            "watercircuitslink_sw:",
            "fuelpump_sw:",
            "oilpump_sw:",
            "motorblowersfront_sw:",
            "motorblowersrear_sw:",
            "motorblowersalloff_sw:",
            "coolingfans_sw:",
            "main_off_bt:",
            "main_on_bt:",
            "security_reset_bt:",
            "releaser_bt:",
            "springbraketoggle_bt:",
            "springbrakeon_bt:",
            "springbrakeoff_bt:",
            "universalbrake1_bt:",
            "universalbrake2_bt:",
            "universalbrake3_bt:",
            "epbrake_bt:",
            "sand_bt:",
            "antislip_bt:",
            "horn_bt:",
            "hornlow_bt:",
            "hornhigh_bt:",
            "whistle_bt:",
            "fuse_bt:",
            "converterfuse_bt:",
            "relayreset1_bt:",
            "relayreset2_bt:",
            "relayreset3_bt:",
            "stlinoff_bt:",
            "doorleftpermit_sw:",
            "doorrightpermit_sw:",
            "doorpermitpreset_sw:",
            "door_left_sw:",
            "door_right_sw:",
            "doorlefton_sw:",
            "doorrighton_sw:",
            "doorleftoff_sw:",
            "doorrightoff_sw:",
            "doorallon_sw:",
            "dooralloff_sw:",
            "doorstep_sw:",
            "doormode_sw:",
            "departure_signal_bt:",
            "upperlight_sw:",
            "leftlight_sw:",
            "rightlight_sw:",
            "dimheadlights_sw:",
            "leftend_sw:",
            "rightend_sw:",
            "lights_sw:",
            "rearupperlight_sw:",
            "rearleftlight_sw:",
            "rearrightlight_sw:",
            "rearleftend_sw:",
            "rearrightend_sw:",
            "compressor_sw:",
            "compressorlocal_sw:",
            "converter_sw:",
            "converterlocal_sw:",
            "converteroff_sw:",
            "main_sw:",
            "radio_sw:",
            "radiochannel_sw:",
            "radiochannelprev_sw:",
            "radiochannelnext_sw:",
            "radiotest_sw:",
            "radiostop_sw:",
            "radiocall3_sw:",
            "radiovolume_sw:",
            "radiovolumeprev_sw:",
            "radiovolumenext_sw:",
            "pantfront_sw:",
            "pantrear_sw:",
            "pantfrontoff_sw:",
            "pantrearoff_sw:",
            "pantalloff_sw:",
            "pantselected_sw:",
            "pantselectedoff_sw:",
            "pantselect_sw:",
            "pantvalves_sw:",
            "pantcompressor_sw:",
            "pantcompressorvalve_sw:",
            "trainheating_sw:",
            "signalling_sw:",
            "door_signalling_sw:",
            "nextcurrent_sw:",
            "instrumentlight_sw:",
            "dashboardlight_sw:",
            "timetablelight_sw:",
            "cablight_sw:",
            "cablightdim_sw:",
            "compartmentlights_sw:",
            "compartmentlightson_sw:",
            "compartmentlightsoff_sw:",
            "battery_sw:",
            "batteryon_sw:",
            "batteryoff_sw:",
            "couplingdisconnect_sw:",
            "universal0:",
            "universal1:",
            "universal2:",
            "universal3:",
            "universal4:",
            "universal5:",
            "universal6:",
            "universal7:",
            "universal8:",
            "universal9:"
        };

        std::size_t stringidx { string::cab_mainctrl };
        for( auto const &cabcontrol : cabcontrols ) {
            m_cabcontrols.insert( { cabcontrol, strings[ stringidx++ ] } );
        }
    }
}

std::string
label_cab_control( std::string const &Label ) {

    if( Label.empty() ) { return ""; }

    auto const lookup = m_cabcontrols.find( Label );
    return (
        lookup != m_cabcontrols.end() ?
            lookup->second :
            "" );
}

std::vector<std::string> strings;

std::unordered_map<std::string, std::string> m_cabcontrols;

} // namespace locale

//---------------------------------------------------------------------------
