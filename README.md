# Clasa-Viitorului
Proiectul din luna august pentru Tekwill în fiecare școală

Pentru a rula programul accesați acest link: https://repl.it/@LudmilaIonas/ClasaViitorului#main.c

## Scopul

Managerul liceului trebuie să selecteze o mulțime cât mai amplă de evenimente ce pot fi desfășurate în singura sală  Clasa Viitorului pe care o are la dispoziție liceul . Știind că i s-au propus n<=100 activități și pentru fiecare activitate i i-a fost anunțat intervalul în care se poate desfășura [s_i,f_i] (s_i   reprezintă ora și minutul de început, iar f_i ora și minutul de final al activității i), elaborați un program care să permită elevilor desfășurarea unui numar cât mai mare de activități. 

## Descrierea algoritmului

![imag1](https://user-images.githubusercontent.com/76489349/102922461-b9ec8200-4496-11eb-907c-3c1fc8a43474.png)

<ol>
<li> P1 -  sortăm activitățile după ora terminării lor;
<li> P2 -  prima activitate programată este cel care se termină cel mai devreme;
<li> P3 - alegem prima activitate dintre cele care urmează în șir ultimei  activități programată care îndeplineşte condiţia că începe după ce s-a terminat ultima activitate programată;
<li> P4 - dacă tentativa de mai sus a eşuat (nu am găsit o astfel de activitate) algoritmul se termină, altfel se programează activitatea găsită şi algoritmul se reia de la pasul 3.
</ol>

![imag2](https://user-images.githubusercontent.com/76489349/102922628-fddf8700-4496-11eb-9c77-84e21406d22a.png)

## ScreenShoturi

![111](https://user-images.githubusercontent.com/76489349/102923670-cb368e00-4498-11eb-98ba-c1333b7fcebd.jpg)

## Concluzii
Metoda de programare Greedy se aplică problemelor de optimizare. Aceasta metoda constă în faptul că se construieşte solutia optimă pas cu pas, la fiecare pas fiind selectat în solutie elementul care pare „cel mai bun/cel mai optim” la momentul respectiv, în speranta că această alegere locală va conduce la optimul global.
<ol>
<li> Nu tuturor problemelor li se pot aplica algoritmi de tip Greedy;
<li> Pentru problemele pentru care nu se cunosc algoritmi care necesită timp polinomial, se caută soliţii, chiar dacă nu optime, atunci apropiate de acestea, dar care au fost obţinute în timp util;
</ol>
