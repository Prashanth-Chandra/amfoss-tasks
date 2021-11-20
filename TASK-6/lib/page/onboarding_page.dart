import 'package:flutter/material.dart';
import 'package:introduction_screen/introduction_screen.dart';
import 'package:onboarding_screen_example/page/home_page.dart';
import 'package:onboarding_screen_example/widget/button_widget.dart';

class OnBoardingPage extends StatelessWidget {
  @override
  Widget build(BuildContext context) => SafeArea(
        child: IntroductionScreen(
          pages: [
            PageViewModel(
              image: Image.network("https://raw.githubusercontent.com/amfoss/tasks/main/task-6/resources/page1.png"),
              title: 'YOGA SURGE',
              body: 'Welcome to the yoga world',
              footer: Text("Inhale the future and Exhale the past"),
              decoration: getPageDecoration(),
            ),
            PageViewModel(
              image: Image.network("https://raw.githubusercontent.com/amfoss/tasks/main/task-6/resources/page2.png"),
              title: "Healthy Freaks Exercise ",
              body: "Letting go is the hardest Asana",
              decoration: getPageDecoration(),
            ),
            PageViewModel(
              image: Image.network("https://raw.githubusercontent.com/amfoss/tasks/main/task-6/resources/page3.png"),
              title: "Cycling",
              body: "You cannot always control what\n goes on outside. But you can\nalways control what happens inside",
              decoration: getPageDecoration(),
            ),
            PageViewModel(
              image: Image.network("https://raw.githubusercontent.com/amfoss/tasks/main/task-6/resources/page4.png"),
              title: "Meditation",
              body: "The longest journey of any person \n is the journey inward",
              decoration: getPageDecoration(),
            ),
          ],
          done: Text('Get Started', style: TextStyle(fontWeight: FontWeight.w600)),
          onDone: () => goToHome(context),
          showSkipButton: true,
          skip: Text('Skip'),
          onSkip: () => goToHome(context),
          //next: Text('Next'),
          dotsDecorator: getDotDecoration(),
          onChange: (index) => print('Page $index selected'),
          globalBackgroundColor: Theme.of(context).primaryColor,
          skipFlex: 0,
          nextFlex: 0,
          // isProgressTap: false,
          // isProgress: false,
          // showNextButton: false,
          // freeze: true,
          // animationDuration: 1000,
        ),
      );

  void goToHome(context) => Navigator.of(context).pushReplacement(
        MaterialPageRoute(builder: (_) => HomePage()),
      );

  Widget buildImage(String path) =>
      Center(child: Image.asset(path, width: 350));

  DotsDecorator getDotDecoration() => DotsDecorator(
        color: Color(0xF2BDB3B0),
        activeColor: Colors.black,
        size: Size(10, 10),
        activeSize: Size(22, 10),
        activeShape: RoundedRectangleBorder(
          borderRadius: BorderRadius.circular(24),
        ),
      );

  PageDecoration getPageDecoration() => PageDecoration(
        titleTextStyle: TextStyle(fontSize: 28, fontWeight: FontWeight.bold),
        bodyTextStyle: TextStyle(fontSize: 20),
        descriptionPadding: EdgeInsets.all(16).copyWith(bottom: 0),
        imagePadding: EdgeInsets.all(24),
        pageColor: Color(0xFFD3C9C6),
      );
}
