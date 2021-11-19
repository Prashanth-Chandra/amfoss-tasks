import 'package:flutter/material.dart';
import 'package:onboarding_screen_example/main.dart';
import 'package:onboarding_screen_example/page/onboarding_page.dart';
import 'package:onboarding_screen_example/widget/button_widget.dart';

class HomePage extends StatelessWidget {
  @override
  Widget build(BuildContext context) => Scaffold(
        // appBar:
        // AppBar(
        //   title: Text("Welcome"),
        //   leading: Icon(
        //     Icons.menu,
        //   ),
        // ),
        appBar: AppBar(
          leading: IconButton(
            icon: Icon(Icons.arrow_back, color: Colors.white),
            onPressed: () => goToOnBoarding(context),
          ),
          title: Text("Welcome"),
         centerTitle: true,
    ),





        body: Center(

          child: Column(
            mainAxisAlignment: MainAxisAlignment.center,
            children: [
              Image.network('https://raw.githubusercontent.com/amfoss/tasks/main/task-6/resources/welcome.png'),
              Text(
                '\n Prashanth Chandra Reddy\n\n',
                style: TextStyle(fontSize: 25, fontWeight: FontWeight.bold),
              ),
              Text(
                '    Hi,I am form Hyderabad. I like to play Violin and\n\n   read comics(not marvel or dc tho). I am looking\n\n forward for attending offline classes in the college.',
                style: TextStyle(fontSize: 18, fontWeight: FontWeight.bold),
              ),

            ],
          ),
        ),
      );

  void goToOnBoarding(context) => Navigator.of(context).pushReplacement(
        MaterialPageRoute(builder: (_) => OnBoardingPage()),
      );
}
