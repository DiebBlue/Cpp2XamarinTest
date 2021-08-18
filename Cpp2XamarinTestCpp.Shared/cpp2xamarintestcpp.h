#pragma once

namespace cpp2xamarintestcpp {

    class Cpp2XamarinTest {
    public:
        
        /// <summary>
        /// Informations about the platform (Android, iOS or Windows).
        /// </summary>
        /// <returns>Info about platform.</returns>
        static char* GetTemplateInfo();
        
        /// <summary>
        /// Construktor.
        /// </summary>
        Cpp2XamarinTest();
                
        /// <summary>
        /// Destructor.
        /// </summary>
        virtual ~Cpp2XamarinTest();

        /// <summary>
        /// Sum of a and b.
        /// </summary>
        /// <param name="a">summand a.</param>
        /// <param name="b">summand b.</param>
        /// <returns>sum.</returns>
        int CalcSum(int a, int b);
    };
}
