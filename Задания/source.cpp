 static string GetStudNumber(int year, int group, string fio)
        {
            
            
            string[] init = fio.Split(' ');
            string i = init[0];
            string i2 = init[1];
            string i3 = init[2];
            char a = i[0]; 
            char b = i2[0];
            char c = i3[0];
             string denis  = year + "." + group + "." + a + b+ c;
            return denis;
        }

        static public void Main(string[] args)
        {
            Console.WriteLine("Напишите ваш год рождения");
            int year = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Напишите номер вашей группы");
            int group = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Введите вше ФИО");
            String fio = Console.ReadLine();
          
            Console.WriteLine(GetStudNumber(year, group, fio));
