# Semestr22
<h1>История ОС</h1>
<h3>ЭВМ первого поколения</h3>
ОС пока не существет. В 1943 году появлилась необходимость в увеличении скорости расчета баллистических таблиц, которая составляла 4 года.
Джон Мокли и Джон Эккерт разработали первый компьютер - Эниак(электронный дифференциальный анализатор). Скорость одного расчета - 5 минут. Используются лампы.
Для перепрограммирования используются перемычки. Данные находятся на перфокартах. Используется десятичная система счисления. <br>
<h4>Архитектура фон Неймана</h4>
<ol>
  <li>Переход к двоичной системе исчисления. 1 - есть сигнал. 0 - нет сигнала
  <li>Вместо перфокарт данные хранятся в памяти
  <li>Программы выполняются последовательно
</ol>
<h3>ЭВМ второго поколения</h3>
В 50-х годах появляются транзисторы. Плюсы по сравнению с лампами:
<ol>
  <li> Надежность
  <li> Транзисторы не выделяют тепло
  <li> Большая скорость переключения
  <li>Плотная коомпоновка деталей
</ol>
Недостатки:
<ol>
  <li>Проблемы с соединением
  <li>Дороговизна производства
</ol>
Появление первых алгоротмических языков (COBAL, ALGOL), появление компилятора.
<h3>ЭВМ третьего и четвертого поколения</h3>
Проблемы: Ответить на вопрос - как на полупроводнике разместить все компонетны. Ответ - использовать фотолитографию
Как соеденить между собой элементы. Ответ - напыление алюминия<br>
Плюсы:
<ol>
  <li>Уменьшение цены
  <li>Надежность
  <li>Ускорение ввода
  <li>Появление магнитного диска
  <li>Появление мультипрограммирования
</ol>

Четвертое поколение ЭВМ началось в 70-80 годах:
<ol>
  <li>Появление виртуальной памяти(выполнение нужного участка программы)
  <li>Появление концепции базы данных
  <li>Появление пк - altair 8800
  <li>Появление apple
  <li>Появления linux
</ol>
Идеология Unix:
<ol>
  <li>Программа решает одну задачу
  <li>Программы хорошо работают вместе
  <li>Поддержка текстовых потоков
</ol>
<h4>Linux</h4>
Создатель Linux - Линус Торвальдс<br>
1991 - разработка linux, разработка терминала для получения почты, разработка линус которая запускается Bourne shell<br>
<h4>Функции ОС:</h4>
<ol>
  <li>Выделение программ
  <li>Выделение памяти, загрузка памяти исполняемой программы
  <li>Обработка системных вызовов
  <li>Ввод и вывод данных
</ol>
  Стандартизированный доступ к устройствам ввода и вывода
<ol>
  <li>Обеспечение безопасности
  <li>Организация сетевого стека
</ol>
Монолитное ядро
<ol>
  <li>По сути одна программа
  <li>Одно адресное устройство
  <li>Linux
  <li>UNIX
</ol>
Микроядерная архитектура:
<ol>
  <li>Маленькое ядро
  <li>Юазовое управление памятью
  <li>Управление процессорами времени
</ol>
Совместимость ОС
<ol>
  <li>Двоичная(компиляция кода без перекомпиляции)
  <li>На уровне исходных кодов(перекомпиляция кода)
</ol>
Абстракция архитектуры
<ol>
  <li>Пользовательские программы
  <li>Ядро
  <li>Ассемблер  
  <li>Микрокод
  <li>Аппаратное обеспечение  
</ol>
Типы файлов UNIX:
<ol>
  <li>Символьные устройства
  <li>Блочные устройства  
  <li>Каталоги  
  <li>Ссылки  
  <li>Именованные каналы
  <li>Сокеты
</ol>

Символьные устройства - вид файла устройства в UNIX/Linux-системах, обеспечивающий интерфейс к устройству, реальному или виртуальному, с возможностью посимвольного обмена информацией. В отличие от блочного устройства символьное устройство, как правило, не обладает возможностями произвольного доступа.<br>

Ссылка в Unix-подобных системах — это своего рода указатель, напоминающий указатели в языках программирования, с той лишь разницей, что он указывает на файл или каталог.<br>

Сокет домена Unix (англ. Unix domain socket, UDS) или IPC-сокет (сокет межпроцессного взаимодействия) — конечная точка обмена данными, подобная Интернет-сокету, но не использующая сетевого протокола для взаимодействия (обмена данными). Используется в операционных системах, поддерживающих стандарт POSIX, для межпроцессного взаимодействия. Корректным термином стандарта POSIX является POSIX Local IPC Sockets.<br>

<h2>Командная строка</h2>
<ol>
<li>Исполняемые программы
<li>Функции
<li>Библиотечные вызовы
<li>Специальные файлы
<li>Форматы файлов
<li>Игры
<li>Пакеты макросов и соглашения
<li>Команды администрирования системы
<li>Процедуры ядра
<ol>
<h3>Редактирование и просмотр файлов</h3>
<ul>
<li>less- постраничный просмотр и поиск
<li>file, stat - информация о файле
<li>readlink - получить полное имя файлоа
<li>tail, head - просмотр конца и начала файла. Монитор логов
<li>vi/vim, emacs, nano, mcedit - редактирование текста
<li>split - разбить файл на несколько частей
</ul>
<h3>Файлы</h3>
<ul>
<li>touch - создание файла, если он не существует
<li>cp - копирование файла
<li>mv - перемещение/переименование файла
<li>ln - создает ссылки на файлы
<li>alias - создает алиас для команды
</ul>
<h3>Директории и навигация</h3>
<ul>
<li>cd - переход в другую директорию
<li>ls - отображает содержимое директории
<li>pwd - отображает текущую директорию
<li>readlink - полный путь к файлу
<li>rmdir - удаление директории
<li>mkdir - создание директории
<li>rm - удаление файлов
</ul>
<h3>Права файлов</h3>
<ul>
<li>Чтение
<li>Запись
<li>Исполнение
</ul>
<h3>Распространение прав пользователя</h3>
<ul>
<li>Владелец
<li>Группа
<li>Остальные
</ul>
Пользователь root имеет доступ на чтение и запись для любого файла<br>
Минимальные права для директории - 5(чтение и выполнение). Без прав на выполнение просмотр атрибутов файлов директории невозможен
<ul>
<li>rwx Чтение, запись и выполнение
<li>rw- Чтение и запись
<li>r-x Чтение и выполнение 
<li>r-- Только чтение
</ul>
 <ul>
<li>w - показывает, кто залогинен и че он занят
<li>who - Показывает, кто залогинен
<li>wall - отправляет бродкаст-сообщение на все терминалы
<li>useradd - утилита создание пользователя
<li>userdel - утилита удаления пользователя
<li>usermod - утилита изменения аккаунтов пользователя
<li>date - просмотр и установка даты
<li>cal - простой календарь
</ul>
<h3>Поток ввода/вывода</h3>
STDIN(0) - Стандартный ввод. Файл, из которого осуществляется чтение. <br>
STDOUT (1) - стандартный вывод. Файл, в который осуществляется запись. <br>
STFERR (2) - Стандартный поток ошибок. Файл, в который осуществляется запись сообщений об ошибках<br>
Перенаправление ввода с клавиатуры в файл: "command < filename"<br>
  “l” symlink символическая ссылка. С помощью символических ссылок администратор может присвоить одному файлу или директории несколько идентичностей. Символическая ссылка является указателем на оригинальный файл. Существует два типа символических ссылок: - жесткие ссылки; - мягкие ссылки.<br>
Различие между твердыми и мягкими ссылками в том, что мягкие ссылки ссылаются на имя файла, в то время как жесткие ссылки прямо ссылаются на оригинальный файл. Кроме того, жесткие ссылки не работают с файлами, расположенными на других разделах или файловых системах.<br>

