# NSU\_ModulePlugin



---



# 모듈 및 플러그인 만들어보기

모듈 및 플러그인을 어떻게 만드는 지 학습한 과정입니다.



---



## 모듈 생성 과정

* Source/Test 폴더를 만들고, Test.Build.cs, Test.cpp, Test.h를 생성
* build.cs파일에, PublicDependencyModuleNames.AddRange(new string\[] {"Core", "CoreUObject", "Engine"}); 작성
* Test.cpp에 IMPLEMENT\_MODULE(FDefaultModuleImpl, Test); 선언
* Target.cs에 ExtraModuleNames.Add("Test"); 추가
* .uproject파일을 메모장으로 열어, Test 모듈을 추가하고, LoadingPhase를 PreDefault로 설정



## 생성한 모듈 테스트

* C++ 클래스 TestActor를 Test 모듈에 생성하고, BeginPlay에서 로그를 띄우게 함.
* Primary 모듈에 있는 기본 캐릭터에서 SpawnActor를 통해 TestActor를 생성하고 테스트



---



## 플러그인 생성 과정

* 엔진 에디터에서 플러그인을 열고, Add로 빈 플러그인으로 Temporary 플러그인 생성
* .uplugin 파일을 열어 생성한 플러그인에 대한 간략한 설명 작성
* Temporary.cpp 내의 StartupModule과 ShutdownModule 에서 로그 출력 코드 작성 후 테스트



## 플러그인 테스트

* Temporary 플러그인에, C++ 클래스 MyUtilityLibrary를 생성하고, 커스텀 디버그 메시지 출력을 위한 함수 AdvancedPrintString 작성
* 이후 프로젝트 레벨 블루프린트에서 해당 함수를 호출하여 테스트



---

