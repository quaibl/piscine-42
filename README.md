# 42 Piscine — Mohammed Quaibl

> Selected C and Shell exercises from the 42 Paris Piscine, organized by module with concise English guides.

[English](#english) · [Français](#francais) · [العربية](#arabic)

<a id="english"></a>

## English

A personal collection of C and Shell exercises from my Piscine at 42 Paris. Use it to review a concept, compare approaches after trying an exercise yourself, and build your own tests.

### Contents

| Module | Topics |
| --- | --- |
| [01-Shell-Searching-and-Finding](./01-Shell-Searching-and-Finding/) | Search and count files |
| [02-Git-Fundamentals](./02-Git-Fundamentals/) | Inspect commit history and ignored files |
| [03-C-Programming-Fundamentals](./03-C-Programming-Fundamentals/) | Basic output, loops and conditions |
| [04-C-Characters-Arithmetics](./04-C-Characters-Arithmetics/) | Print integers and digit combinations |
| [05-C-Algorithmics-Fundamentals](./05-C-Algorithmics-Fundamentals/) | Factorials, powers and Fibonacci |
| [06-C-Pointers](./06-C-Pointers/) | Indirection, swapping and arrays |
| [07-C-Simple-Strings](./07-C-Simple-Strings/) | Classify, transform and display strings |
| [08-C-Function-Pointers](./08-C-Function-Pointers/) | Pass callbacks to array operations |
| [09-C-Memory-Management](./09-C-Memory-Management/) | Allocate arrays, join and split strings, convert bases |
| [10-C-System-Interface](./10-C-System-Interface/) | Read and sort command-line arguments |
| [11-C-Strings](./11-C-Strings/) | Copy, compare, concatenate and search strings |

The numbered folders provide a reading order reconstructed from my Piscine work. Each module opens directly into its exercise folders (`ex0`, `ex1`, etc.). Gaps reflect the selection of published exercises. The original headers are preserved where present. Official exercise statements are excluded.

### Try an exercise

From the repository root, create a local `test_main.c` with the following code. Compile it with the function under test. You should see `A` followed by a newline. The Shell example searches for `.sh` files under the current directory.

```c
void ft_putchar(char c);

int main(void)
{
    ft_putchar('A');
    ft_putchar('\n');
    return 0;
}
```

```sh
cc -Wall -Wextra -Werror 03-C-Programming-Fundamentals/ex0/ft_putchar.c test_main.c -o test_putchar
./test_putchar
bash 01-Shell-Searching-and-Finding/ex0/find_sh.sh
```

The published files passed syntax checks. Test behavior yourself with normal inputs and edge cases, such as empty strings or arrays where the function supports them.

<a id="francais"></a>

## Français

Une sélection personnelle d’exercices en C et en Shell réalisés pendant ma Piscine à 42 Paris. Essaie chaque exercice, puis compare ton approche et écris tes propres tests.

### Sommaire

| Module | Notions |
| --- | --- |
| [01-Shell-Searching-and-Finding](./01-Shell-Searching-and-Finding/) | Rechercher et compter des fichiers |
| [02-Git-Fundamentals](./02-Git-Fundamentals/) | Consulter l’historique et les fichiers ignorés |
| [03-C-Programming-Fundamentals](./03-C-Programming-Fundamentals/) | Affichage, boucles et conditions |
| [04-C-Characters-Arithmetics](./04-C-Characters-Arithmetics/) | Afficher des entiers et des combinaisons de chiffres |
| [05-C-Algorithmics-Fundamentals](./05-C-Algorithmics-Fundamentals/) | Factorielles, puissances et suite de Fibonacci |
| [06-C-Pointers](./06-C-Pointers/) | Indirection, échange de valeurs et tableaux |
| [07-C-Simple-Strings](./07-C-Simple-Strings/) | Classifier, transformer et afficher des chaînes |
| [08-C-Function-Pointers](./08-C-Function-Pointers/) | Passer des fonctions en argument pour traiter des tableaux |
| [09-C-Memory-Management](./09-C-Memory-Management/) | Allouer des tableaux, joindre et découper des chaînes, convertir des bases |
| [10-C-System-Interface](./10-C-System-Interface/) | Lire et trier les arguments de la ligne de commande |
| [11-C-Strings](./11-C-Strings/) | Copier, comparer, concaténer et rechercher dans des chaînes |

La numérotation suit un parcours reconstitué à partir de mes travaux de Piscine. Chaque module contient directement les dossiers d’exercices (`ex0`, `ex1`, etc.). Les numéros manquants correspondent à des exercices absents de cette sélection. Les en-têtes d’origine sont conservés lorsqu’ils existent. Les sujets officiels sont exclus.

### Essayer un exercice

À la racine du dépôt, crée un fichier local `test_main.c` avec le petit programme donné dans la section anglaise, puis exécute les commandes ci-dessous. Le programme affiche `A` suivi d’un saut de ligne. Le script Shell cherche les fichiers `.sh` sous le dossier courant.

```sh
cc -Wall -Wextra -Werror 03-C-Programming-Fundamentals/ex0/ft_putchar.c test_main.c -o test_putchar
./test_putchar
bash 01-Shell-Searching-and-Finding/ex0/find_sh.sh
```

La syntaxe a été vérifiée. Pour vérifier le comportement, ajoute tes propres tests, y compris pour les cas limites pris en charge.

<a id="arabic"></a>

## العربية

مجموعة شخصية من تمارين C وShell التي كتبتها خلال الـPiscine في 42 Paris. جرّب التمرين بنفسك، ثم قارن طريقتك بالكود المنشور واكتب اختباراتك الخاصة.

### الفهرس

| المجلد | الموضوع |
| --- | --- |
| [01-Shell-Searching-and-Finding](./01-Shell-Searching-and-Finding/) | البحث عن الملفات وعدّها |
| [02-Git-Fundamentals](./02-Git-Fundamentals/) | عرض سجل الحفظ والملفات المتجاهلة |
| [03-C-Programming-Fundamentals](./03-C-Programming-Fundamentals/) | الطباعة والحلقات والشروط |
| [04-C-Characters-Arithmetics](./04-C-Characters-Arithmetics/) | طباعة الأعداد وتركيبات الأرقام |
| [05-C-Algorithmics-Fundamentals](./05-C-Algorithmics-Fundamentals/) | المضروب والأسس ومتتالية فيبوناتشي |
| [06-C-Pointers](./06-C-Pointers/) | المؤشرات وتبديل القيم والمصفوفات |
| [07-C-Simple-Strings](./07-C-Simple-Strings/) | تصنيف السلاسل النصية وتحويلها وعرضها |
| [08-C-Function-Pointers](./08-C-Function-Pointers/) | تمرير الدوال لمعالجة المصفوفات |
| [09-C-Memory-Management](./09-C-Memory-Management/) | حجز الذاكرة ودمج النصوص وتقسيمها وتحويل قواعد الأعداد |
| [10-C-System-Interface](./10-C-System-Interface/) | قراءة وسائط سطر الأوامر وترتيبها |
| [11-C-Strings](./11-C-Strings/) | نسخ السلاسل ومقارنتها ودمجها والبحث فيها |

ترقيم المجلدات مبني على تسلسل عملي خلال الـPiscine. داخل كل قسم تظهر مجلدات التمارين مباشرة، مثل `ex0` و`ex1`. الأرقام الناقصة تعني أن بعض التمارين خارج هذه المجموعة. احتفظت بالترويسات الأصلية حيث كانت موجودة، واستبعدت نصوص الأسئلة الرسمية.

### تجربة أحد التمارين

من جذر المستودع، أنشئ ملفًا محليًا باسم `test_main.c` وانسخ إليه برنامج الاختبار الموجود في القسم الإنجليزي. نفّذ الأوامر التالية. يطبع البرنامج الحرف `A` ثم ينتقل إلى سطر جديد، ويبحث سكربت Shell عن ملفات `.sh` داخل المجلد الحالي ومجلداته الفرعية.

```sh
cc -Wall -Wextra -Werror 03-C-Programming-Fundamentals/ex0/ft_putchar.c test_main.c -o test_putchar
./test_putchar
bash 01-Shell-Searching-and-Finding/ex0/find_sh.sh
```

اجتازت الملفات فحص الصياغة. لاختبار السلوك، جرّب مدخلات عادية وحالات حدّية تدعمها الدالة، مثل السلسلة الفارغة.
