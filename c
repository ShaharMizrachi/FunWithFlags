[33mcommit 6a738f20f499f1651fa457a021a17bbc07481112[m[33m ([m[1;36mHEAD -> [m[1;32mmaster[m[33m, [m[1;31morigin/master[m[33m)[m
Author: Shahar <shaharm22@gmail.com>
Date:   Sun Jan 30 10:27:40 2022 +0200

    first commit

[1mdiff --git a/.gitignore b/.gitignore[m
[1mnew file mode 100644[m
[1mindex 0000000..aa724b7[m
[1m--- /dev/null[m
[1m+++ b/.gitignore[m
[36m@@ -0,0 +1,15 @@[m
[32m+[m[32m*.iml[m
[32m+[m[32m.gradle[m
[32m+[m[32m/local.properties[m
[32m+[m[32m/.idea/caches[m
[32m+[m[32m/.idea/libraries[m
[32m+[m[32m/.idea/modules.xml[m
[32m+[m[32m/.idea/workspace.xml[m
[32m+[m[32m/.idea/navEditor.xml[m
[32m+[m[32m/.idea/assetWizardSettings.xml[m
[32m+[m[32m.DS_Store[m
[32m+[m[32m/build[m
[32m+[m[32m/captures[m
[32m+[m[32m.externalNativeBuild[m
[32m+[m[32m.cxx[m
[32m+[m[32mlocal.properties[m
[1mdiff --git a/.idea/.gitignore b/.idea/.gitignore[m
[1mnew file mode 100644[m
[1mindex 0000000..26d3352[m
[1m--- /dev/null[m
[1m+++ b/.idea/.gitignore[m
[36m@@ -0,0 +1,3 @@[m
[32m+[m[32m# Default ignored files[m
[32m+[m[32m/shelf/[m
[32m+[m[32m/workspace.xml[m
[1mdiff --git a/.idea/compiler.xml b/.idea/compiler.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..fb7f4a8[m
[1m--- /dev/null[m
[1m+++ b/.idea/compiler.xml[m
[36m@@ -0,0 +1,6 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<project version="4">[m
[32m+[m[32m  <component name="CompilerConfiguration">[m
[32m+[m[32m    <bytecodeTargetLevel target="11" />[m
[32m+[m[32m  </component>[m
[32m+[m[32m</project>[m
\ No newline at end of file[m
[1mdiff --git a/.idea/deploymentTargetDropDown.xml b/.idea/deploymentTargetDropDown.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..0cc1fa5[m
[1m--- /dev/null[m
[1m+++ b/.idea/deploymentTargetDropDown.xml[m
[36m@@ -0,0 +1,37 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<project version="4">[m
[32m+[m[32m  <component name="deploymentTargetDropDown">[m
[32m+[m[32m    <targetSelectedWithDropDown>[m
[32m+[m[32m      <Target>[m
[32m+[m[32m        <type value="QUICK_BOOT_TARGET" />[m
[32m+[m[32m        <deviceKey>[m
[32m+[m[32m          <Key>[m
[32m+[m[32m            <type value="VIRTUAL_DEVICE_PATH" />[m
[32m+[m[32m            <value value="C:\Users\shaha\.android\avd\Nexus_4_API_26.avd" />[m
[32m+[m[32m          </Key>[m
[32m+[m[32m        </deviceKey>[m
[32m+[m[32m      </Target>[m
[32m+[m[32m    </targetSelectedWithDropDown>[m
[32m+[m[32m    <timeTargetWasSelectedWithDropDown value="2021-10-06T09:30:34.600429400Z" />[m
[32m+[m[32m    <targetsSelectedWithDialog>[m
[32m+[m[32m      <Target>[m
[32m+[m[32m        <type value="QUICK_BOOT_TARGET" />[m
[32m+[m[32m        <deviceKey>[m
[32m+[m[32m          <Key>[m
[32m+[m[32m            <type value="VIRTUAL_DEVICE_PATH" />[m
[32m+[m[32m            <value value="C:\Users\shaha\.android\avd\Nexus_4_API_26.avd" />[m
[32m+[m[32m          </Key>[m
[32m+[m[32m        </deviceKey>[m
[32m+[m[32m      </Target>[m
[32m+[m[32m      <Target>[m
[32m+[m[32m        <type value="QUICK_BOOT_TARGET" />[m
[32m+[m[32m        <deviceKey>[m
[32m+[m[32m          <Key>[m
[32m+[m[32m            <type value="VIRTUAL_DEVICE_PATH" />[m
[32m+[m[32m            <value value="C:\Users\shaha\.android\avd\Pixel_5_API_26.avd" />[m
[32m+[m[32m          </Key>[m
[32m+[m[32m        </deviceKey>[m
[32m+[m[32m      </Target>[m
[32m+[m[32m    </targetsSelectedWithDialog>[m
[32m+[m[32m  </component>[m
[32m+[m[32m</project>[m
\ No newline at end of file[m
[1mdiff --git a/.idea/gradle.xml b/.idea/gradle.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..526b4c2[m
[1m--- /dev/null[m
[1m+++ b/.idea/gradle.xml[m
[36m@@ -0,0 +1,20 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<project version="4">[m
[32m+[m[32m  <component name="GradleMigrationSettings" migrationVersion="1" />[m
[32m+[m[32m  <component name="GradleSettings">[m
[32m+[m[32m    <option name="linkedExternalProjectsSettings">[m
[32m+[m[32m      <GradleProjectSettings>[m
[32m+[m[32m        <option name="testRunner" value="GRADLE" />[m
[32m+[m[32m        <option name="distributionType" value="DEFAULT_WRAPPED" />[m
[32m+[m[32m        <option name="externalProjectPath" value="$PROJECT_DIR$" />[m
[32m+[m[32m        <option name="modules">[m
[32m+[m[32m          <set>[m
[32m+[m[32m            <option value="$PROJECT_DIR$" />[m
[32m+[m[32m            <option value="$PROJECT_DIR$/app" />[m
[32m+[m[32m          </set>[m
[32m+[m[32m        </option>[m
[32m+[m[32m        <option name="resolveModulePerSourceSet" value="false" />[m
[32m+[m[32m      </GradleProjectSettings>[m
[32m+[m[32m    </option>[m
[32m+[m[32m  </component>[m
[32m+[m[32m</project>[m
\ No newline at end of file[m
[1mdiff --git a/.idea/misc.xml b/.idea/misc.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..9473df1[m
[1m--- /dev/null[m
[1m+++ b/.idea/misc.xml[m
[36m@@ -0,0 +1,41 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<project version="4">[m
[32m+[m[32m  <component name="DesignSurface">[m
[32m+[m[32m    <option name="filePathToZoomLevelMap">[m
[32m+[m[32m      <map>[m
[32m+[m[32m        <entry key="..\:/Git/AndroidStudioProjects/FunWithFlags/app/src/main/res/drawable/answer.xml" value="0.2703125" />[m
[32m+[m[32m        <entry key="..\:/Git/AndroidStudioProjects/FunWithFlags/app/src/main/res/drawable/bottom_bg.xml" value="0.2703125" />[m
[32m+[m[32m        <entry key="..\:/Git/AndroidStudioProjects/FunWithFlags/app/src/main/res/drawable/botton_shape.xml" value="0.2703125" />[m
[32m+[m[32m        <entry key="..\:/Git/AndroidStudioProjects/FunWithFlags/app/src/main/res/drawable/create_account_btn.xml" value="0.2703125" />[m
[32m+[m[32m        <entry key="..\:/Git/AndroidStudioProjects/FunWithFlags/app/src/main/res/drawable/game.xml" value="0.2703125" />[m
[32m+[m[32m        <entry key="..\:/Git/AndroidStudioProjects/FunWithFlags/app/src/main/res/drawable/gameBackgroung.xml" value="0.14635416666666667" />[m
[32m+[m[32m        <entry key="..\:/Git/AndroidStudioProjects/FunWithFlags/app/src/main/res/drawable/header_bg.xml" value="0.2703125" />[m
[32m+[m[32m        <entry key="..\:/Git/AndroidStudioProjects/FunWithFlags/app/src/main/res/drawable/switch_shape.xml" value="0.2703125" />[m
[32m+[m[32m        <entry key="..\:/Git/AndroidStudioProjects/FunWithFlags/app/src/main/res/drawable/testing.xml" value="0.2703125" />[m
[32m+[m[32m        <entry key="..\:/Git/AndroidStudioProjects/FunWithFlags/app/src/main/res/layout/about.xml" value="0.25416666666666665" />[m
[32m+[m[32m        <entry key="..\:/Git/AndroidStudioProjects/FunWithFlags/app/src/main/res/layout/activity_main.xml" value="0.4" />[m
[32m+[m[32m        <entry key="..\:/Git/AndroidStudioProjects/FunWithFlags/app/src/main/res/layout/game_page.xml" value="0.4" />[m
[32m+[m[32m        <entry key="..\:/Git/AndroidStudioProjects/FunWithFlags/app/src/main/res/layout/listitem.xml" value="0.11041666666666666" />[m
[32m+[m[32m        <entry key="..\:/Git/AndroidStudioProjects/FunWithFlags/app/src/main/res/layout/loginform.xml" value="0.6" />[m
[32m+[m[32m        <entry key="..\:/Git/AndroidStudioProjects/FunWithFlags/app/src/main/res/layout/menu.xml" value="0.24003623188405798" />[m
[32m+[m[32m        <entry key="..\:/Git/AndroidStudioProjects/FunWithFlags/app/src/main/res/layout/menulevels.xml" value="0.264" />[m
[32m+[m[32m        <entry key="..\:/Git/AndroidStudioProjects/FunWithFlags/app/src/main/res/layout/page2.xml" value="0.21240942028985507" />[m
[32m+[m[32m        <entry key="..\:/Git/AndroidStudioProjects/FunWithFlags/app/src/main/res/layout/register.xml" value="0.264" />[m
[32m+[m[32m        <entry key="..\:/Git/AndroidStudioProjects/FunWithFlags/app/src/main/res/layout/registerform.xml" value="0.25416666666666665" />[m
[32m+[m[32m        <entry key="..\:/Git/AndroidStudioProjects/FunWithFlags/app/src/main/res/layout/scorelist.xml" value="0.25416666666666665" />[m
[32m+[m[32m        <entry key="..\:/Git/AndroidStudioProjects/FunWithFlags/app/src/main/res/layout/scoretable.xml" value="0.11041666666666666" />[m
[32m+[m[32m        <entry key="..\:/Git/AndroidStudioProjects/FunWithFlags/app/src/main/res/layout/splash_screen.xml" value="0.264" />[m
[32m+[m[32m        <entry key="..\:/Git/AndroidStudioProjects/FunWithFlags/app/src/main/res/layout/summary_screen.xml" value="0.264" />[m
[32m+[m[32m        <entry key="..\:/Git/AndroidStudioProjects/FunWithFlags/app/src/main/res/layout/switch_shape.xml" value="0.23505434782608695" />[m
[32m+[m[32m        <entry key="..\:/Git/AndroidStudioProjects/FunWithFlags/app/src/main/res/layout/testing.xml" value="0.4" />[m
[32m+[m[32m        <entry key="..\:/Git/AndroidStudioProjects/FunWithFlags/app/src/main/res/mipmap-anydpi-v26/ic_launcher.xml" value="0.12760416666666666" />[m
[32m+[m[32m      </map>[m
[32m+[m[32m    </option>[m
[32m+[m[32m  </component>[m
[32m+[m[32m  <component name="ProjectRootManager" version="2" languageLevel="JDK_11" default="true" project-jdk-name="11" project-jdk-type="JavaSDK">[m
[32m+[m[32m    <output url="file://$PROJECT_DIR$/build/classes" />[m
[32m+[m[32m  </component>[m
[32m+[m[32m  <component name="ProjectType">[m
[32m+[m[32m    <option name="id" value="Android" />[m
[32m+[m[32m  </component>[m
[32m+[m[32m</project>[m
\ No newline at end of file[m
[1mdiff --git a/.idea/render.experimental.xml b/.idea/render.experimental.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..8ec256a[m
[1m--- /dev/null[m
[1m+++ b/.idea/render.experimental.xml[m
[36m@@ -0,0 +1,6 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<project version="4">[m
[32m+[m[32m  <component name="RenderSettings">[m
[32m+[m[32m    <option name="showDecorations" value="true" />[m
[32m+[m[32m  </component>[m
[32m+[m[32m</project>[m
\ No newline at end of file[m
[1mdiff --git a/.idea/vcs.xml b/.idea/vcs.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..b2bdec2[m
[1m--- /dev/null[m
[1m+++ b/.idea/vcs.xml[m
[36m@@ -0,0 +1,6 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<project version="4">[m
[32m+[m[32m  <component name="VcsDirectoryMappings">[m
[32m+[m[32m    <mapping directory="$PROJECT_DIR$/../.." vcs="Git" />[m
[32m+[m[32m  </component>[m
[32m+[m[32m</project>[m
\ No newline at end of file[m
[1mdiff --git a/app/.gitignore b/app/.gitignore[m
[1mnew file mode 100644[m
[1mindex 0000000..42afabf[m
[1m--- /dev/null[m
[1m+++ b/app/.gitignore[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32m/build[m
\ No newline at end of file[m
[1mdiff --git a/app/build.gradle b/app/build.gradle[m
[1mnew file mode 100644[m
[1mindex 0000000..44ba4a2[m
[1m--- /dev/null[m
[1m+++ b/app/build.gradle[m
[36m@@ -0,0 +1,67 @@[m
[32m+[m[32mplugins {[m
[32m+[m[32m    id 'com.android.application'[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mandroid {[m
[32m+[m[32m    compileSdk 30[m
[32m+[m
[32m+[m[32m    packagingOptions {[m
[32m+[m[32m        exclude 'META-INF/DEPENDENCIES'[m
[32m+[m[32m        exclude 'META-INF/LICENSE'[m
[32m+[m[32m        exclude 'META-INF/LICENSE.txt'[m
[32m+[m[32m        exclude 'META-INF/license.txt'[m
[32m+[m[32m        exclude 'META-INF/NOTICE'[m
[32m+[m[32m        exclude 'META-INF/NOTICE.txt'[m
[32m+[m[32m        exclude 'META-INF/notice.txt'[m
[32m+[m[32m        exclude 'META-INF/ASL2.0'[m
[32m+[m[32m        exclude("META-INF/*.kotlin_module")[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    defaultConfig {[m
[32m+[m[32m        applicationId "com.example.funwithflags"[m
[32m+[m[32m        minSdk 26[m
[32m+[m[32m        targetSdk 30[m
[32m+[m[32m        versionCode 1[m
[32m+[m[32m        versionName "1.0"[m
[32m+[m
[32m+[m[32m        testInstrumentationRunner "androidx.test.runner.AndroidJUnitRunner"[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    buildTypes {[m
[32m+[m[32m        release {[m
[32m+[m[32m            minifyEnabled false[m
[32m+[m[32m            proguardFiles getDefaultProguardFile('proguard-android-optimize.txt'), 'proguard-rules.pro'[m
[32m+[m[32m        }[m
[32m+[m[32m    }[m
[32m+[m[32m    compileOptions {[m
[32m+[m[32m        sourceCompatibility JavaVersion.VERSION_1_8[m
[32m+[m[32m        targetCompatibility JavaVersion.VERSION_1_8[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mdependencies {[m
[32m+[m
[32m+[m[32m    implementation 'androidx.appcompat:appcompat:1.3.1'[m
[32m+[m[32m    implementation 'com.google.android.material:material:1.4.0'[m
[32m+[m[32m    implementation 'androidx.constraintlayout:constraintlayout:2.1.0'[m
[32m+[m[32m    implementation 'org.apache.httpcomponents.client5:httpclient5:5.1'[m
[32m+[m[32m    implementation 'com.google.code.gson:gson:2.8.8'[m
[32m+[m[32m    testImplementation 'junit:junit:4.+'[m
[32m+[m[32m    androidTestImplementation 'androidx.test.ext:junit:1.1.3'[m
[32m+[m[32m    androidTestImplementation 'androidx.test.espresso:espresso-core:3.4.0'[m
[32m+[m
[32m+[m
[32m+[m[32m    implementation fileTree(dir: 'libs', include: ['*.jar'])[m
[32m+[m
[32m+[m[32m    implementation 'androidx.cardview:cardview:1.0.0'[m
[32m+[m[32m    implementation 'com.squareup.retrofit2:retrofit:2.5.0'[m
[32m+[m[32m    implementation 'com.squareup.retrofit2:converter-gson:2.1.0'[m
[32m+[m[32m    implementation 'com.airbnb.android:lottie:3.7.0'[m
[32m+[m[32m    implementation 'com.google.android.gms:play-services-auth:19.2.0'[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/app/proguard-rules.pro b/app/proguard-rules.pro[m
[1mnew file mode 100644[m
[1mindex 0000000..481bb43[m
[1m--- /dev/null[m
[1m+++ b/app/proguard-rules.pro[m
[36m@@ -0,0 +1,21 @@[m
[32m+[m[32m# Add project specific ProGuard rules here.[m
[32m+[m[32m# You can control the set of applied configuration files using the[m
[32m+[m[32m# proguardFiles setting in build.gradle.[m
[32m+[m[32m#[m
[32m+[m[32m# For more details, see[m
[32m+[m[32m#   http://developer.android.com/guide/developing/tools/proguard.html[m
[32m+[m
[32m+[m[32m# If your project uses WebView with JS, uncomment the following[m
[32m+[m[32m# and specify the fully qualified class name to the JavaScript interface[m
[32m+[m[32m# class:[m
[32m+[m[32m#-keepclassmembers class fqcn.of.javascript.interface.for.webview {[m
[32m+[m[32m#   public *;[m
[32m+[m[32m#}[m
[32m+[m
[32m+[m[32m# Uncomment this to preserve the line number information for[m
[32m+[m[32m# debugging stack traces.[m
[32m+[m[32m#-keepattributes SourceFile,LineNumberTable[m
[32m+[m
[32m+[m[32m# If you keep the line number information, uncomment this to[m
[32m+[m[32m# hide the original source file name.[m
[32m+[m[32m#-renamesourcefileattribute SourceFile[m
\ No newline at end of file[m
[1mdiff --git a/app/src/androidTest/java/com/example/funwithflags/ExampleInstrumentedTest.java b/app/src/androidTest/java/com/example/funwithflags/ExampleInstrumentedTest.java[m
[1mnew file mode 100644[m
[1mindex 0000000..8b74d0a[m
[1m--- /dev/null[m
[1m+++ b/app/src/androidTest/java/com/example/funwithflags/ExampleInstrumentedTest.java[m
[36m@@ -0,0 +1,26 @@[m
[32m+[m[32mpackage com.example.funwithflags;[m
[32m+[m
[32m+[m[32mimport android.content.Context;[m
[32m+[m
[32m+[m[32mimport androidx.test.platform.app.InstrumentationRegistry;[m
[32m+[m[32mimport androidx.test.ext.junit.runners.AndroidJUnit4;[m
[32m+[m
[32m+[m[32mimport org.junit.Test;[m
[32m+[m[32mimport org.junit.runner.RunWith;[m
[32m+[m
[32m+[m[32mimport static org.junit.Assert.*;[m
[32m+[m
[32m+[m[32m/**[m
[32m+[m[32m * Instrumented test, which will execute on an Android device.[m
[32m+[m[32m *[m
[32m+[m[32m * @see <a href="http://d.android.com/tools/testing">Testing documentation</a>[m
[32m+[m[32m */[m
[32m+[m[32m@RunWith(AndroidJUnit4.class)[m
[32m+[m[32mpublic class ExampleInstrumentedTest {[m
[32m+[m[32m    @Test[m
[32m+[m[32m    public void useAppContext() {[m
[32m+[m[32m        // Context of the app under test.[m
[32m+[m[32m        Context appContext = InstrumentationRegistry.getInstrumentation().getTargetContext();[m
[32m+[m[32m        assertEquals("com.example.funwithflags", appContext.getPackageName());[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/app/src/main/AndroidManifest.xml b/app/src/main/AndroidManifest.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..a348dee[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/AndroidManifest.xml[m
[36m@@ -0,0 +1,48 @@[m
[32m+[m[32m<?xml version="1.0" encoding="utf-8"?>[m
[32m+[m[32m<manifest xmlns:android="http://schemas.android.com/apk/res/android"[m
[32m+[m[32m    package="com.example.funwithflags">[m
[32m+[m[32m    <uses-permission android:name="android.permission.INTERNET"/>[m
[32m+[m[32m    <uses-permission android:name="android.permission.READ_EXTERNAL_STORAGE" />[m
[32m+[m[32m    <uses-permission android:name="android.permission.WRITE_EXTERNAL_STORAGE"/>[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32m    <application[m
[32m+[m[32m        android:allowBackup="true"[m
[32m+[m[32m        android:icon="@mipmap/ic_launcher_foreground"[m
[32m+[m[32m        android:label="@string/app_name"[m
[32m+[m[32m        android:roundIcon="@mipmap/ic_launcher_round"[m
[32m+[m[32m        android:supportsRtl="true"[m
[32m+[m[32m        android:usesCleartextTraffic="true"[m
[32m+[m[32m        android:requestLegacyExternalStorage="true"[m
[32m+[m[32m        android:theme="@style/Theme.FunWithFlags">[m
[32m+[m[32m        <activity android:name=".Register"[m
[32m+[m[32m            android:label="Register"[m
[32m+[m[32m            android:parentActivityName=".MainActivity">[m
[32m+[m
[32m+[m[32m        </activity>[m
[32m+[m[32m        <activity android:name=".Menu"[m
[32m+[m[32m            android:label="@string/menu_txt">[m
[32m+[m[32m        </activity>[m
[32m+[m[32m        <activity android:name=".GamePage"[m
[32m+[m[32m            android:label="@string/Game_txt">[m
[32m+[m[32m        </activity>[m
[32m+[m[32m        <activity android:name=".SummaryScreen"[m
[32m+[m[32m            android:label="@string/Summery_txt">[m
[32m+[m[32m        </activity>[m
[32m+[m[32m        <activity android:name=".ScoreList"[m
[32m+[m[32m            android:label="@string/ScoreScreen_txt">[m
[32m+[m[32m        </activity>[m
[32m+[m[32m        <activity[m
[32m+[m[32m            android:name=".MainActivity"[m
[32m+[m[32m            android:exported="true">[m
[32m+[m[32m            <intent-filter>[m
[32m+[m[32m                <action android:name="android.intent.action.MAIN" />[m
[32m+[m
[32m+[m[32m                <category android:name="android.intent.category.LAUNCHER" />[m
[32m+[m[32m            </intent-filter>[m
[32m+[m[32m        </activity>[m
[32m+[m[32m        <service android:name=".BackgroundSoundService" />[m
[32m+[m[32m    </application>[m
[32m+[m
[32m+[m[32m</manifest>[m
\ No newline at end of file[m
[1mdiff --git a/app/src/main/ic_launcher-playstore.png b/app/src/main/ic_launcher-playstore.png[m
[1mnew file mode 100644[m
[1mindex 0000000..160524c[m
Binary files /dev/null and b/app/src/main/ic_launcher-playstore.png differ
[1mdiff --git a/app/src/main/java/Http/Http.java b/app/src/main/java/Http/Http.java[m
[1mnew file mode 100644[m
[1mindex 0000000..e087a58[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/java/Http/Http.java[m
[36m@@ -0,0 +1,173 @@[m
[32m+[m[32mpackage Http;[m
[32m+[m
[32m+[m
[32m+[m[32mimport com.google.gson.Gson;[m
[32m+[m[32mimport com.google.gson.reflect.TypeToken;[m
[32m+[m
[32m+[m[32mimport org.apache.hc.client5.http.classic.HttpClient;[m
[32m+[m[32mimport org.apache.hc.client5.http.classic.methods.HttpGet;[m
[32m+[m[32mimport org.apache.hc.client5.http.classic.methods.HttpPost;[m
[32m+[m[32mimport org.apache.hc.client5.http.impl.classic.HttpClients;[m
[32m+[m[32mimport org.apache.hc.core5.http.ClassicHttpResponse;[m
[32m+[m[32mimport org.apache.hc.core5.http.io.entity.EntityUtils;[m
[32m+[m[32mimport org.apache.hc.core5.http.io.entity.StringEntity;[m
[32m+[m[32mimport org.json.JSONObject;[m
[32m+[m[32mimport org.json.JSONTokener;[m
[32m+[m
[32m+[m[32mimport java.lang.reflect.Type;[m
[32m+[m[32mimport java.util.ArrayList;[m
[32m+[m[32mimport java.util.HashMap;[m
[32m+[m[32mimport java.util.Iterator;[m
[32m+[m[32mimport java.util.List;[m
[32m+[m
[32m+[m[32mimport models.Flag;[m
[32m+[m[32mimport models.ScoreUser;[m
[32m+[m[32mimport models.User;[m
[32m+[m
[32m+[m[32mpublic class Http {[m
[32m+[m[32m//Post[m
[32m+[m[32m    public void createUser(String url,String userName, String email, String password) {[m
[32m+[m[32m        HttpClient httpclient = HttpClients.createDefault();[m
[32m+[m[32m        HttpPost httppost = new HttpPost(url);[m
[32m+[m
[32m+[m[32m        httppost.addHeader("Content-Type","application/json; charset=utf-8");[m
[32m+[m[32m        httppost.addHeader("Access-Control-Allow-Origin","*");[m
[32m+[m[32m        httppost.addHeader("Accept","application/json");[m
[32m+[m
[32m+[m[32m// Request parameters and other properties.[m
[32m+[m[32m        HashMap<String,String> params = new HashMap();[m
[32m+[m[32m        params.put("userName", userName);[m
[32m+[m[32m        params.put("email", email);[m
[32m+[m[32m        params.put("password", password);[m
[32m+[m[32m        StringEntity requestEntity = new StringEntity(new JSONObject(params).toString());[m
[32m+[m[32m        httppost.setEntity(requestEntity);[m
[32m+[m
[32m+[m[32m//Execute and get the response.[m
[32m+[m[32m        try {[m
[32m+[m[32m            ClassicHttpResponse response = (ClassicHttpResponse)httpclient.execute(httppost);[m
[32m+[m[32m            String responseString = EntityUtils.toString(response.getEntity(), "UTF-8");[m
[32m+[m[32m        } catch (Exception e) {[m
[32m+[m
[32m+[m[32m        }[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32m    public ArrayList<User> getUsers(String url) {[m
[32m+[m[32m        HttpClient httpclient = HttpClients.createDefault();[m
[32m+[m[32m        HttpGet httpGet = new HttpGet(url);[m
[32m+[m[32m        httpGet.addHeader("Content-Type","application/json; charset=utf-8");[m
[32m+[m[32m        httpGet.addHeader("Access-Control-Allow-Origin","*");[m
[32m+[m[32m        httpGet.addHeader("Accept","application/json");[m
[32m+[m[32m        try {[m
[32m+[m[32m            ClassicHttpResponse response = (ClassicHttpResponse)httpclient.execute(httpGet);[m
[32m+[m[32m            String responseString = EntityUtils.toString(response.getEntity(), "UTF-8");[m
[32m+[m[32m            JSONObject json = new JSONObject(responseString); //string of the json[m
[32m+[m[32m            Iterator<String> keys = json.keys();[m
[32m+[m[32m            ArrayList<User> allUsers= new ArrayList<>();[m
[32m+[m[32m            while(keys.hasNext()) {[m
[32m+[m[32m                String key = keys.next();[m
[32m+[m
[32m+[m[32m                if (json.get(key) instanceof JSONObject) {[m
[32m+[m[32m                   String email= ((JSONObject) json.get(key)).getString("email");[m
[32m+[m[32m                   String userName= ((JSONObject) json.get(key)).getString("userName");[m
[32m+[m[32m                    String password= ((JSONObject) json.get(key)).getString("password");[m
[32m+[m[32m                    User user= new User(email,userName,password);[m
[32m+[m[32m                    System.out.println(user.toString());[m
[32m+[m[32m                    allUsers.add(user);[m
[32m+[m[32m                }[m
[32m+[m[32m            }[m
[32m+[m[32m            return allUsers;[m
[32m+[m[32m        } catch (Exception e) {[m
[32m+[m
[32m+[m
[32m+[m[32m        }[m
[32m+[m[32m        return null;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public ArrayList<ArrayList<Flag>> getFlags(String url) {[m
[32m+[m[32m        HttpClient httpclient = HttpClients.createDefault();[m
[32m+[m[32m        HttpGet httpGet = new HttpGet(url);[m
[32m+[m[32m        httpGet.addHeader("Content-Type","application/json; charset=utf-8");[m
[32m+[m[32m        httpGet.addHeader("Access-Control-Allow-Origin","*");[m
[32m+[m[32m        httpGet.addHeader("Accept","application/json");[m
[32m+[m[32m        try {[m
[32m+[m[32m            ClassicHttpResponse response = (ClassicHttpResponse)httpclient.execute(httpGet);[m
[32m+[m[32m            String responseString = EntityUtils.toString(response.getEntity(), "UTF-8");[m
[32m+[m[32m            Type listType = new TypeToken<ArrayList<ArrayList<Flag>>>(){}.getType();[m
[32m+[m[32m            ArrayList<ArrayList<Flag>> list = new Gson().fromJson(responseString,listType);[m
[32m+[m[32m            for(ArrayList<Flag> level : list)[m
[32m+[m[32m                for(Flag flag : level) flag.setImg(flag.getName() + ".png");[m
[32m+[m[32m            return list;[m
[32m+[m[32m        } catch (Exception e) {[m
[32m+[m[32m             e.getMessage();[m
[32m+[m[32m        }[m
[32m+[m[32m        return null;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m
[32m+[m[32m    //Post[m
[32m+[m[32m    public void createScoreUser(String url,User user, int  score) {[m
[32m+[m[32m        HttpClient httpclient = HttpClients.createDefault();[m
[32m+[m[32m        HttpPost httppost = new HttpPost(url);[m
[32m+[m
[32m+[m[32m        httppost.addHeader("Content-Type","application/json; charset=utf-8");[m
[32m+[m[32m        httppost.addHeader("Access-Control-Allow-Origin","*");[m
[32m+[m[32m        httppost.addHeader("Accept","application/json");[m
[32m+[m[32m        String scores=String.valueOf(score);[m
[32m+[m[32m// Request parameters and other properties.[m
[32m+[m[32m        HashMap<String,String> params = new HashMap();[m
[32m+[m[32m        params.put("userName", user.getName());[m
[32m+[m[32m        params.put("email", user.getEmail());[m
[32m+[m[32m        params.put("score", scores);[m
[32m+[m[32m        StringEntity requestEntity = new StringEntity(new JSONObject(params).toString());[m
[32m+[m[32m        httppost.setEntity(requestEntity);[m
[32m+[m[32m//Execute and get the response.[m
[32m+[m[32m        try {[m
[32m+[m[32m            ClassicHttpResponse response = (ClassicHttpResponse)httpclient.execute(httppost);[m
[32m+[m[32m            String responseString = EntityUtils.toString(response.getEntity(), "UTF-8");[m
[32m+[m
[32m+[m[32m        } catch (Exception e) {[m
[32m+[m
[32m+[m[32m        }[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m
[32m+[m[32m    public ArrayList<ScoreUser> getScore(String url) {[m
[32m+[m[32m        HttpClient httpclient = HttpClients.createDefault();[m
[32m+[m[32m        HttpGet httpGet = new HttpGet(url);[m
[32m+[m[32m        httpGet.addHeader("Content-Type","application/json; charset=utf-8");[m
[32m+[m[32m        httpGet.addHeader("Access-Control-Allow-Origin","*");[m
[32m+[m[32m        httpGet.addHeader("Accept","application/json");[m
[32m+[m[32m        try {[m
[32m+[m[32m            ClassicHttpResponse response = (ClassicHttpResponse)httpclient.execute(httpGet);[m
[32m+[m[32m            String responseString = EntityUtils.toString(response.getEntity(), "UTF-8");[m
[32m+[m[32m            JSONObject json = new JSONObject(responseString); //string of the json[m
[32m+[m[32m            Iterator<String> keys = json.keys();[m
[32m+[m[32m            ArrayList<ScoreUser> usersScore= new ArrayList<>();[m
[32m+[m[32m            while(keys.hasNext()) {[m
[32m+[m[32m                String key = keys.next();[m
[32m+[m[32m                if (json.get(key) instanceof JSONObject) {[m
[32m+[m[32m                    String email= ((JSONObject) json.get(key)).getString("email");[m
[32m+[m[32m                    String userName= ((JSONObject) json.get(key)).getString("userName");[m
[32m+[m[32m                    int score= Integer.parseInt(((JSONObject) json.get(key)).getString("score"));[m
[32m+[m[32m                    ScoreUser scoreUser = new ScoreUser(userName,email,score);[m
[32m+[m[32m                    usersScore.add(scoreUser);[m
[32m+[m[32m                }[m
[32m+[m[32m            }[m
[32m+[m[32m            return usersScore;[m
[32m+[m[32m        } catch (Exception e) {[m
[32m+[m
[32m+[m[32m        }[m
[32m+[m[32m        return null;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32m}[m
[1mdiff --git a/app/src/main/java/com/example/funwithflags/BackgroundSoundService.java b/app/src/main/java/com/example/funwithflags/BackgroundSoundService.java[m
[1mnew file mode 100644[m
[1mindex 0000000..347698e[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/java/com/example/funwithflags/BackgroundSoundService.java[m
[36m@@ -0,0 +1,39 @@[m
[32m+[m[32mpackage com.example.funwithflags;[m
[32m+[m[32mimport android.app.Service;[m
[32m+[m[32mimport android.content.Intent;[m
[32m+[m[32mimport android.media.MediaPlayer;[m
[32m+[m[32mimport android.os.IBinder;[m
[32m+[m[32mimport android.widget.Toast;[m
[32m+[m[32mimport androidx.annotation.Nullable;[m
[32m+[m
[32m+[m[32m// Use for music[m
[32m+[m[32mpublic  class BackgroundSoundService extends Service {[m
[32m+[m[32m    public MediaPlayer mediaPlayer;[m
[32m+[m[32m    @Nullable[m
[32m+[m[32m    @Override[m
[32m+[m[32m    public IBinder onBind(Intent intent) {[m
[32m+[m[32m        return null;[m
[32m+[m[32m    }[m
[32m+[m[32m    @Override[m
[32m+[m[32m    public void onCreate() {[m
[32m+[m[32m        super.onCreate();[m
[32m+[m
[32m+[m[32m        mediaPlayer = MediaPlayer.create(this, R.raw.sound);[m
[32m+[m[32m        mediaPlayer.setLooping(true); // Set looping[m
[32m+[m[32m        mediaPlayer.setVolume(50, 50);[m
[32m+[m[32m    }[m
[32m+[m[32m    public int onStartCommand(Intent intent, int flags, int startId) {[m
[32m+[m[32m        mediaPlayer.start();[m
[32m+[m[32m        return startId;[m
[32m+[m[32m    }[m
[32m+[m[32m    public void onStart(Intent intent, int startId) {[m
[32m+[m[32m    }[m
[32m+[m[32m    @Override[m
[32m+[m[32m    public void onDestroy() {[m
[32m+[m[32m        mediaPlayer.stop();[m
[32m+[m[32m        mediaPlayer.release();[m
[32m+[m[32m    }[m
[32m+[m[32m    @Override[m
[32m+[m[32m    public void onLowMemory() {[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/app/src/main/java/com/example/funwithflags/GamePage.java b/app/src/main/java/com/example/funwithflags/GamePage.java[m
[1mnew file mode 100644[m
[1mindex 0000000..247e6ac[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/java/com/example/funwithflags/GamePage.java[m
[36m@@ -0,0 +1,155 @@[m
[32m+[m[32mpackage com.example.funwithflags;[m
[32m+[m
[32m+[m[32mimport android.content.Context;[m
[32m+[m[32mimport android.content.Intent;[m
[32m+[m[32mimport android.content.res.Resources;[m
[32m+[m[32mimport android.graphics.BitmapFactory;[m
[32m+[m[32mimport android.graphics.drawable.Drawable;[m
[32m+[m[32mimport android.os.Bundle;[m
[32m+[m[32mimport android.os.CountDownTimer;[m
[32m+[m[32mimport android.view.View;[m
[32m+[m[32mimport android.widget.Button;[m
[32m+[m[32mimport android.widget.EditText;[m
[32m+[m[32mimport android.widget.ImageView;[m
[32m+[m[32mimport android.widget.TextView;[m
[32m+[m[32mimport android.widget.Toast;[m
[32m+[m
[32m+[m[32mimport androidx.appcompat.app.AlertDialog;[m
[32m+[m[32mimport androidx.appcompat.app.AppCompatActivity;[m
[32m+[m
[32m+[m[32mimport com.airbnb.lottie.LottieAnimationView;[m
[32m+[m
[32m+[m[32mimport org.w3c.dom.Text;[m
[32m+[m
[32m+[m[32mimport java.lang.reflect.Field;[m
[32m+[m[32mimport java.util.ArrayList;[m
[32m+[m[32mimport java.util.Locale;[m
[32m+[m[32mimport java.util.Timer;[m
[32m+[m[32mimport java.util.TimerTask;[m
[32m+[m[32mimport java.util.stream.Collectors;[m
[32m+[m
[32m+[m[32mimport models.Flag;[m
[32m+[m[32mimport models.Game;[m
[32m+[m[32mimport models.Question;[m
[32m+[m[32mimport models.User;[m
[32m+[m
[32m+[m[32mpublic class GamePage extends AppCompatActivity {[m
[32m+[m[32m    ArrayList<Flag> flags;[m
[32m+[m[32m    Game game;[m
[32m+[m[32m    CountDownTimer timer;[m
[32m+[m[32m    ImageView[] hearts;[m
[32m+[m[32m    Button[] btns;[m
[32m+[m[32m    User user;[m
[32m+[m[32m    Flag currentCorrectQuestion;[m
[32m+[m
[32m+[m
[32m+[m[32m    protected void onCreate(Bundle savedInstanceState) {[m
[32m+[m
[32m+[m[32m        flags = (ArrayList<Flag>) getIntent().getSerializableExtra("flags");[m
[32m+[m[32m        game = new Game(getIntent().getIntExtra("level", 1));[m
[32m+[m
[32m+[m[32m        user = (User) getIntent().getSerializableExtra("user");[m
[32m+[m[32m        Integer level = (Integer) getIntent().getSerializableExtra("level");[m
[32m+[m
[32m+[m[32m        super.onCreate(savedInstanceState);[m
[32m+[m[32m        setContentView(R.layout.game_page);[m
[32m+[m
[32m+[m
[32m+[m[32m        btns = new Button[]{(Button) findViewById(R.id.btn_answer1), (Button) findViewById(R.id.btn_answer2), (Button) findViewById(R.id.btn_answer3), (Button) findViewById(R.id.btn_answer4)};[m
[32m+[m[32m        hearts = new ImageView[]{(ImageView) findViewById(R.id.heart_1), (ImageView) findViewById(R.id.heart_2), (ImageView) findViewById(R.id.heart_3)};[m
[32m+[m
[32m+[m[32m        for (Button btn : btns) {[m
[32m+[m[32m            btn.setOnClickListener(view -> {[m
[32m+[m[32m                handleAnswer(btn);[m
[32m+[m[32m            });[m
[32m+[m[32m        }[m
[32m+[m[32m        generateNewQuestion();[m
[32m+[m
[32m+[m
[32m+[m[32m        //language changer[m
[32m+[m[32m        if (MainActivity.languageFlag == 1) translate_game("he");[m
[32m+[m[32m        else translate_game("en");[m
[32m+[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m
[32m+[m[32m    //language changer[m
[32m+[m[32m    public void translate_game(String lang) {[m
[32m+[m[32m        Context context;[m
[32m+[m[32m        Resources resources;[m
[32m+[m[32m        context = LocaleHelper.setLocale(this, lang);[m
[32m+[m[32m        resources = context.getResources();[m
[32m+[m[32m        ((TextView) findViewById(R.id.timeLeft)).setText(resources.getText(R.string.timeLeft_txt));[m
[32m+[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m
[32m+[m[32m    private void handleAnswer(Button btn) {[m
[32m+[m[32m        boolean isCorrect = ((Flag)btn.getTag()).getName().equals(this.currentCorrectQuestion.name);[m
[32m+[m[32m        if ((isCorrect && this.game.currectAnswers + 1 == 20) || (!isCorrect && this.game.heart - 1 == 0)) {[m
[32m+[m[32m            if (isCorrect) this.game.currectAnswers++;[m
[32m+[m[32m            handleEndOfGame();[m
[32m+[m[32m            return;[m
[32m+[m[32m        }[m
[32m+[m[32m        if (isCorrect) {[m
[32m+[m[32m            this.game.currectAnswers++;[m
[32m+[m[32m            generateNewQuestion();[m
[32m+[m[32m        } else {[m
[32m+[m[32m            this.game.heart--;[m
[32m+[m[32m            this.hearts[this.game.heart].setVisibility(View.INVISIBLE);[m
[32m+[m[32m            btn.setEnabled(false);[m
[32m+[m[32m            btn.setVisibility(View.INVISIBLE);[m
[32m+[m[32m        }[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    private void handleEndOfGame() {[m
[32m+[m[32m        Intent firstIntent = new Intent(this, SummaryScreen.class);[m
[32m+[m[32m        firstIntent.putExtra("user", user);[m
[32m+[m[32m        firstIntent.putExtra("game", game);[m
[32m+[m[32m        startActivity(firstIntent);[m
[32m+[m[32m        timer.cancel();[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    private void generateNewQuestion() {[m
[32m+[m[32m        ((TextView) findViewById(R.id.currentAnswers)).setText(this.game.currectAnswers + "/20");[m
[32m+[m[32m        Question question = Question.generateQuestion(flags);[m
[32m+[m[32m        currentCorrectQuestion = question.correctOption;[m
[32m+[m[32m        flags = (ArrayList<Flag>) flags.stream().filter(flag -> flag.id != question.correctOption.id).collect(Collectors.toList());[m
[32m+[m[32m        int id = getResources().getIdentifier(question.correctOption.name.replaceAll("(\\s|-)", "").toLowerCase(Locale.ROOT), "drawable", getPackageName());[m
[32m+[m[32m        ((ImageView) findViewById(R.id.pick_flag)).setImageResource(id);[m
[32m+[m[32m        for (int i = 0; i < 4; i++) {[m
[32m+[m[32m            btns[i].setText(getName(question.options.get(i).name.replaceAll("(\\s|-)", "")));[m
[32m+[m[32m            btns[i].setEnabled(true);[m
[32m+[m[32m            btns[i].setTag(question.options.get(i));[m
[32m+[m[32m            btns[i].setVisibility(View.VISIBLE);[m
[32m+[m[32m        }[m
[32m+[m[32m        resetTimer();[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    private void resetTimer() {[m
[32m+[m[32m        if (timer != null) {[m
[32m+[m[32m            timer.cancel();[m
[32m+[m[32m        }[m
[32m+[m[32m        timer = new CountDownTimer(10000, 1000) {[m
[32m+[m[32m            @Override[m
[32m+[m[32m            public void onTick(long l) {[m
[32m+[m[32m                game.totalTime += 1;[m
[32m+[m[32m                ((TextView) findViewById(R.id.time_txt)).setText(String.valueOf(l / 1000));[m
[32m+[m[32m            }[m
[32m+[m
[32m+[m[32m            @Override[m
[32m+[m[32m            public void onFinish() {[m
[32m+[m[32m                handleEndOfGame();[m
[32m+[m[32m            }[m
[32m+[m[32m        }.start();[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    private String getName(String name) {[m
[32m+[m[32m        Context context = LocaleHelper.setLocale(this, MainActivity.languageFlag == 1 ? "he" : "en");[m
[32m+[m[32m        Resources resources = context.getResources();[m
[32m+[m[32m        String packageName = getPackageName();[m
[32m+[m[32m        int resId = getResources().getIdentifier(name, "string", packageName);[m
[32m+[m[32m        return (String) resources.getText(resId);[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m}[m
[1mdiff --git a/app/src/main/java/com/example/funwithflags/LocaleHelper.java b/app/src/main/java/com/example/funwithflags/LocaleHelper.java[m
[1mnew file mode 100644[m
[1mindex 0000000..7222dab[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/java/com/example/funwithflags/LocaleHelper.java[m
[36m@@ -0,0 +1,64 @@[m
[32m+[m[32mpackage com.example.funwithflags;[m
[32m+[m[32mimport android.annotation.TargetApi;[m
[32m+[m[32mimport android.content.Context;[m
[32m+[m[32mimport android.content.SharedPreferences;[m
[32m+[m[32mimport android.content.res.Configuration;[m
[32m+[m[32mimport android.content.res.Resources;[m
[32m+[m[32mimport android.os.Build;[m
[32m+[m[32mimport android.preference.PreferenceManager;[m
[32m+[m
[32m+[m[32mimport java.util.Locale;[m
[32m+[m
[32m+[m
[32m+[m[32m// Use for language changer[m
[32m+[m[32mpublic class LocaleHelper {[m
[32m+[m[32m    private static final String SELECTED_LANGUAGE = "Locale.Helper.Selected.Language";[m
[32m+[m
[32m+[m[32m    // the method is used to set the language at runtime[m
[32m+[m[32m    public static Context setLocale(Context context, String language) {[m
[32m+[m[32m        persist(context, language);[m
[32m+[m
[32m+[m[32m        // updating the language for devices above android nougat[m
[32m+[m[32m            return updateResources(context, language);[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    private static void persist(Context context, String language) {[m
[32m+[m[32m        SharedPreferences preferences = PreferenceManager.getDefaultSharedPreferences(context);[m
[32m+[m[32m        SharedPreferences.Editor editor = preferences.edit();[m
[32m+[m[32m        editor.putString(SELECTED_LANGUAGE, language);[m
[32m+[m[32m        editor.apply();[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    // the method is used update the language of application by creating[m
[32m+[m[32m    // object of inbuilt Locale class and passing language argument to it[m
[32m+[m[32m    @TargetApi(Build.VERSION_CODES.N)[m
[32m+[m[32m    private static Context updateResources(Context context, String language) {[m
[32m+[m[32m        Locale locale = new Locale(language);[m
[32m+[m[32m        Locale.setDefault(locale);[m
[32m+[m
[32m+[m[32m        Configuration configuration = context.getResources().getConfiguration();[m
[32m+[m[32m        configuration.setLocale(locale);[m
[32m+[m[32m        configuration.setLayoutDirection(locale);[m
[32m+[m
[32m+[m[32m        return context.createConfigurationContext(configuration);[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m
[32m+[m[32m    @SuppressWarnings("deprecation")[m
[32m+[m[32m    private static Context updateResourcesLegacy(Context context, String language) {[m
[32m+[m[32m        Locale locale = new Locale(language);[m
[32m+[m[32m        Locale.setDefault(locale);[m
[32m+[m
[32m+[m[32m        Resources resources = context.getResources();[m
[32m+[m
[32m+[m[32m        Configuration configuration = resources.getConfiguration();[m
[32m+[m[32m        configuration.locale = locale;[m
[32m+[m[32m        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.JELLY_BEAN_MR1) {[m
[32m+[m[32m            configuration.setLayoutDirection(locale);[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        resources.updateConfiguration(configuration, resources.getDisplayMetrics());[m
[32m+[m
[32m+[m[32m        return context;[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[1mdiff --git a/app/src/main/java/com/example/funwithflags/MainActivity.java b/app/src/main/java/com/example/funwithflags/MainActivity.java[m
[1mnew file mode 100644[m
[1mindex 0000000..e13c0cf[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/java/com/example/funwithflags/MainActivity.java[m
[36m@@ -0,0 +1,152 @@[m
[32m+[m[32mpackage com.example.funwithflags;[m
[32m+[m
[32m+[m[32mimport androidx.appcompat.app.AppCompatActivity;[m
[32m+[m
[32m+[m[32mimport android.content.Context;[m
[32m+[m[32mimport android.content.Intent;[m
[32m+[m[32mimport android.content.SharedPreferences;[m
[32m+[m[32mimport android.content.res.Resources;[m
[32m+[m[32mimport android.os.Bundle;[m
[32m+[m[32mimport android.widget.Button;[m
[32m+[m[32mimport android.widget.CheckBox;[m
[32m+[m[32mimport android.widget.EditText;[m
[32m+[m[32mimport android.widget.RadioButton;[m
[32m+[m[32mimport android.widget.RadioGroup;[m
[32m+[m[32mimport android.widget.Switch;[m
[32m+[m[32mimport android.widget.TextView;[m
[32m+[m[32mimport android.widget.Toast;[m
[32m+[m
[32m+[m[32mimport java.util.ArrayList;[m
[32m+[m[32mimport java.util.Locale;[m
[32m+[m
[32m+[m[32mimport firebase.Firebase;[m
[32m+[m[32mimport models.User;[m
[32m+[m
[32m+[m[32mpublic class MainActivity extends AppCompatActivity {[m
[32m+[m
[32m+[m[32m    public static SharedPreferences mPrefs;[m
[32m+[m[32m    public static final String prefs_name="PrefsFile";[m
[32m+[m[32m    Context context;[m
[32m+[m[32m    Resources resources;[m
[32m+[m[32m    public static int languageFlag=0;[m
[32m+[m
[32m+[m
[32m+[m[32m    @Override[m
[32m+[m[32m    protected void onCreate(Bundle savedInstanceState) {[m
[32m+[m[32m        super.onCreate(savedInstanceState);[m
[32m+[m[32m        setContentView(R.layout.activity_main);[m
[32m+[m[32m        mPrefs=getSharedPreferences(prefs_name,MODE_PRIVATE);[m
[32m+[m[32m        getPreferencesData(); // remember function checking is user in memory[m
[32m+[m
[32m+[m[32m        findViewById(R.id.btnlogin).setOnClickListener(view -> {[m
[32m+[m[32m            CheckBox checkBoxRemember=(CheckBox)findViewById(R.id.checkBoxRememberMe);[m
[32m+[m[32m            String email = ((EditText) findViewById(R.id.mail_txt)).getText().toString().toLowerCase(Locale.ROOT);[m
[32m+[m[32m            System.out.println(email);[m
[32m+[m[32m            String password = ((EditText) findViewById(R.id.pass_txt)).getText().toString();[m
[32m+[m[32m            if ((!email.equals("")) && (!password.equals(""))) {[m
[32m+[m[32m                ArrayList<User> allUsers = Firebase.getAllUsers();[m
[32m+[m[32m                for (User user : allUsers) {[m
[32m+[m[32m                    if ((user.getEmail()).equals(email)) {[m
[32m+[m[32m                        if ((user.getPassword()).equals(password)){[m
[32m+[m[32m                            //remember user if checkbox is sign ;[m
[32m+[m[32m                            if (checkBoxRemember.isChecked()){[m
[32m+[m[32m                                // if "remember me btn checked - we fill automatically the fields[m
[32m+[m[32m                                Boolean boolIsChecked=checkBoxRemember.isChecked();[m
[32m+[m[32m                                SharedPreferences.Editor editor=mPrefs.edit();[m
[32m+[m[32m                                editor.putString("pref_email",user.getEmail());[m
[32m+[m[32m                                editor.putString("pref_pass",user.getPassword());[m
[32m+[m[32m                                editor.putString("pref_name",user.getName());[m
[32m+[m[32m                                editor.putBoolean("pref_check",boolIsChecked);[m
[32m+[m[32m                                editor.apply();[m
[32m+[m[32m                            }[m
[32m+[m[32m                            else mPrefs.edit().clear().apply();[m
[32m+[m[32m                            // moving to menu screen[m
[32m+[m[32m                            Intent firstIntent = new Intent(this,Menu.class);[m
[32m+[m[32m                            firstIntent.putExtra("user", user);[m
[32m+[m[32m                            startActivity(firstIntent);[m
[32m+[m[32m                            Toast.makeText(this.getBaseContext(), "login successfully", Toast.LENGTH_LONG).show();[m
[32m+[m[32m                            return;[m
[32m+[m[32m                        }[m
[32m+[m[32m                        else {[m
[32m+[m[32m                            Toast.makeText(this.getBaseContext(), "Wrong password please try again", Toast.LENGTH_LONG).show();[m
[32m+[m[32m                            return;[m
[32m+[m[32m                        }[m
[32m+[m[32m                    }[m
[32m+[m[32m                }[m
[32m+[m[32m                Toast.makeText(this.getBaseContext(), "Email does not exist please register to FUnWithFlags", Toast.LENGTH_LONG).show();[m
[32m+[m[32m            }[m
[32m+[m[32m        });[m
[32m+[m
[32m+[m[32m//        moving to register screen[m
[32m+[m[32m        findViewById(R.id.create_account_btn).setOnClickListener(view -> {[m
[32m+[m[32m            Intent firstIntent = new Intent(this,Register.class);[m
[32m+[m[32m            startActivity(firstIntent);[m
[32m+[m[32m        });[m
[32m+[m
[32m+[m[32m        //radio language changing[m
[32m+[m[32m        if(languageFlag == 0) ((RadioGroup)findViewById(R.id.radioGroup)).check( R.id.radio_english);[m
[32m+[m[32m        else {[m
[32m+[m[32m            ((RadioGroup) findViewById(R.id.radioGroup)).check(R.id.radio_hebrew);[m
[32m+[m[32m            translationLogIn("he");[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m        ((RadioGroup)findViewById(R.id.radioGroup)).setOnCheckedChangeListener((group, checkedId) -> {[m
[32m+[m[32m            RadioButton rb = (RadioButton) group.findViewById(checkedId);[m
[32m+[m[32m            if (rb!=null){[m
[32m+[m[32m                switch(checkedId) {[m
[32m+[m[32m                    case R.id.radio_english:[m
[32m+[m[32m                        translationLogIn("en");[m
[32m+[m[32m                        languageFlag=0;[m
[32m+[m[32m                        break;[m
[32m+[m
[32m+[m[32m                    case R.id.radio_hebrew:[m
[32m+[m[32m                        translationLogIn("he");[m
[32m+[m[32m                        languageFlag=1;[m
[32m+[m[32m                        break;[m
[32m+[m[32m                }[m
[32m+[m
[32m+[m[32m            }[m
[32m+[m[32m        });[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m
[32m+[m[32m//checking if the user is already  in the memory of the device[m
[32m+[m[32m    private void getPreferencesData() {[m
[32m+[m[32m        SharedPreferences sp = getSharedPreferences(prefs_name, MODE_PRIVATE);[m
[32m+[m[32m        if (sp.contains("pref_name") && sp.contains("pref_pass") && sp.contains("pref_check")) {[m
[32m+[m[32m            String email = sp.getString("pref_email", "not found");[m
[32m+[m[32m            String name = sp.getString("pref_name", "not found");[m
[32m+[m[32m            String password = sp.getString("pref_pass", "not found");[m
[32m+[m[32m            Boolean checking = sp.getBoolean("pref_check", false);[m
[32m+[m[32m            ((EditText) findViewById(R.id.mail_txt)).setText(email);[m
[32m+[m[32m            ((EditText) findViewById(R.id.pass_txt)).setText(password);[m
[32m+[m[32m            ((CheckBox) findViewById(R.id.checkBoxRememberMe)).setChecked(checking);[m
[32m+[m[32m            Intent firstIntent = new Intent(this,Menu.class);[m
[32m+[m[32m            User user=new User(email,name,password);[m
[32m+[m[32m            firstIntent.putExtra("user", user);[m
[32m+[m[32m            startActivity(firstIntent);[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m
[32m+[m[32m    }[m
[32m+[m[32m    //language changer[m
[32m+[m[32m    public void translationLogIn (String lang){[m
[32m+[m[32m        context = LocaleHelper.setLocale(this, lang);[m
[32m+[m[32m        resources = context.getResources();[m
[32m+[m[32m        ((RadioButton)findViewById(R.id.radio_english)).setText(resources.getText(R.string.english_rd_txt));[m
[32m+[m[32m        ((RadioButton)findViewById(R.id.radio_hebrew)).setText(resources.getText(R.string.hebrew_rd_txt));[m
[32m+[m[32m        //((TextView)findViewById(R.id.blessing)).setText(resources.getText(R.string.blessing_txt));[m
[32m+[m[32m        ((Button)findViewById(R.id.create_account_btn)).setText(resources.getText(R.string.create_Account));[m
[32m+[m[32m        ((Button)findViewById(R.id.btnlogin)).setText(resources.getText(R.string.Login_btn_txt));[m
[32m+[m[32m        ((CheckBox)findViewById(R.id.checkBoxRememberMe)).setText(resources.getText(R.string.rememberMe_txt));[m
[32m+[m[32m        ((EditText)findViewById(R.id.pass_txt)).setHint(resources.getText(R.string.password_txt));[m
[32m+[m[32m        ((EditText)findViewById(R.id.mail_txt)).setHint(resources.getText(R.string.email_txt));[m
[32m+[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32m}[m
[1mdiff --git a/app/src/main/java/com/example/funwithflags/Menu.java b/app/src/main/java/com/example/funwithflags/Menu.java[m
[1mnew file mode 100644[m
[1mindex 0000000..061a1d8[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/java/com/example/funwithflags/Menu.java[m
[36m@@ -0,0 +1,161 @@[m
[32m+[m[32mpackage com.example.funwithflags;[m
[32m+[m
[32m+[m[32mimport static com.example.funwithflags.MainActivity.mPrefs;[m
[32m+[m
[32m+[m[32mimport android.content.Context;[m
[32m+[m[32mimport android.content.Intent;[m
[32m+[m[32mimport android.content.SharedPreferences;[m
[32m+[m[32mimport android.content.res.Resources;[m
[32m+[m[32mimport android.os.Bundle;[m
[32m+[m[32mimport android.widget.Button;[m
[32m+[m[32mimport android.widget.CheckBox;[m
[32m+[m[32mimport android.widget.EditText;[m
[32m+[m[32mimport android.widget.RadioButton;[m
[32m+[m[32mimport android.widget.Switch;[m
[32m+[m[32mimport android.widget.TextView;[m
[32m+[m[32mimport android.widget.Toast;[m
[32m+[m
[32m+[m[32mimport androidx.appcompat.app.AppCompatActivity;[m
[32m+[m
[32m+[m[32mimport com.google.gson.Gson;[m
[32m+[m[32mimport com.google.gson.reflect.TypeToken;[m
[32m+[m
[32m+[m[32mimport java.lang.reflect.Type;[m
[32m+[m[32mimport java.util.ArrayList;[m
[32m+[m
[32m+[m[32mimport firebase.Firebase;[m
[32m+[m[32mimport models.Flag;[m
[32m+[m[32mimport models.Game;[m
[32m+[m[32mimport models.User;[m
[32m+[m
[32m+[m[32mpublic class Menu extends AppCompatActivity {[m
[32m+[m
[32m+[m[32m    User user;[m
[32m+[m[32m    public static int music_flag=0;[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32m    @Override[m
[32m+[m[32m    protected void onCreate(Bundle savedInstanceState) {[m
[32m+[m[32m        super.onCreate(savedInstanceState);[m
[32m+[m[32m        setContentView(R.layout.menu);[m
[32m+[m[32m        Intent music = new Intent(this, BackgroundSoundService.class);[m
[32m+[m[32m        user = (User) getIntent().getSerializableExtra("user");[m
[32m+[m[32m        ((TextView)findViewById(R.id.user)).setText(user.getName());[m
[32m+[m[32m        ArrayList<ArrayList<Flag>> levels;[m
[32m+[m[32m        levels = fetchAllLevels();[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32m        findViewById(R.id.level1_btn).setOnClickListener(view-> {[m
[32m+[m[32m                intent(1,0,user,levels);[m
[32m+[m[32m            }[m
[32m+[m[32m        );[m
[32m+[m
[32m+[m[32m        findViewById(R.id.level2_btn).setOnClickListener(view-> {[m
[32m+[m[32m                intent(2,1,user,levels);[m
[32m+[m[32m            }[m
[32m+[m[32m        );[m
[32m+[m
[32m+[m[32m        findViewById(R.id.level3_btn).setOnClickListener(view->{[m
[32m+[m[32m                intent(3,2,user,levels);[m
[32m+[m[32m            }[m
[32m+[m[32m        );[m
[32m+[m
[32m+[m[32m        findViewById(R.id.logout_btn).setOnClickListener(btn->{[m
[32m+[m
[32m+[m[32m            SharedPreferences.Editor editor=mPrefs.edit();[m
[32m+[m[32m            editor.remove("pref_email");[m
[32m+[m[32m            editor.remove("pref_pass");[m
[32m+[m[32m            editor.remove("pref_name");[m
[32m+[m[32m            editor.apply();[m
[32m+[m[32m            editor.commit();[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32m            Intent firstIntent = new Intent(this, MainActivity.class);[m
[32m+[m[32m            music_flag=0;[m
[32m+[m[32m            startActivity(firstIntent);[m
[32m+[m[32m            stopService(music);[m
[32m+[m[32m            Toast.makeText(this.getBaseContext(), "Logout successfully", Toast.LENGTH_LONG).show();[m
[32m+[m[32m        });[m
[32m+[m
[32m+[m[32m        findViewById(R.id.score_btn).setOnClickListener(btn->{[m
[32m+[m[32m            Intent scoreTable = new Intent(this, ScoreList.class);[m
[32m+[m[32m            scoreTable.putExtra("user", user);[m
[32m+[m[32m            startActivity(scoreTable);[m
[32m+[m[32m        });[m
[32m+[m
[32m+[m[32m        // Switch widget - on or off[m
[32m+[m[32m        if(music_flag ==1) ((Switch)findViewById(R.id.switch_music)).setChecked(true);[m
[32m+[m[32m        else ((Switch)findViewById(R.id.switch_music)).setChecked(false);[m
[32m+[m[32m        ((Switch)findViewById(R.id.switch_music)).setOnCheckedChangeListener((buttonView, isChecked) -> {[m
[32m+[m[32m            if (isChecked) {[m
[32m+[m[32m                music_flag=1;[m
[32m+[m[32m                startService(music);[m
[32m+[m[32m            }[m
[32m+[m[32m            else{[m
[32m+[m[32m                music_flag=0;[m
[32m+[m[32m                stopService(music);[m
[32m+[m[32m            }[m
[32m+[m[32m        });[m
[32m+[m
[32m+[m
[32m+[m[32m        //language changer[m
[32m+[m[32m        if(MainActivity.languageFlag==1) translate_menu("he");[m
[32m+[m[32m        else translate_menu("en");[m
[32m+[m
[32m+[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m
[32m+[m[32m    // Get all information of flags from firebase to storage once[m
[32m+[m[32m    private ArrayList<ArrayList<Flag>> fetchAllLevels() {[m
[32m+[m[32m        SharedPreferences pref = this.getPreferences(MODE_PRIVATE);[m
[32m+[m[32m        SharedPreferences.Editor prefsEditor = pref.edit();[m
[32m+[m
[32m+[m[32m        Gson gson = new Gson();[m
[32m+[m[32m        String json = pref.getString("levels", "");[m
[32m+[m[32m        Type listType = new TypeToken<ArrayList<ArrayList<Flag>>>(){}.getType();[m
[32m+[m[32m        ArrayList<ArrayList<Flag>> levels = gson.fromJson(json, listType);[m
[32m+[m[32m        if (levels == null) {[m
[32m+[m[32m            levels = Firebase.getAllFlags();[m
[32m+[m[32m            json = gson.toJson(levels); // myObject - instance of MyObject[m
[32m+[m[32m            prefsEditor.putString("levels", json);[m
[32m+[m[32m            prefsEditor.commit();[m
[32m+[m[32m        }[m
[32m+[m[32m        return levels;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m
[32m+[m[32m    public void intent (int levelNum,int flagLevel, User user, ArrayList<ArrayList<Flag>> levels){[m
[32m+[m[32m        Intent firstIntent = new Intent(this, GamePage.class);[m
[32m+[m[32m        firstIntent.putExtra("flags", levels.get(flagLevel));[m
[32m+[m[32m        firstIntent.putExtra("level", levelNum);[m
[32m+[m[32m        firstIntent.putExtra("user", user);[m
[32m+[m[32m        startActivity(firstIntent);[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m
[32m+[m[32m    //language changer[m
[32m+[m[32m    public void translate_menu(String lang)[m
[32m+[m[32m    {[m
[32m+[m[32m        Context context;[m
[32m+[m[32m        Resources resources;[m
[32m+[m[32m        context = LocaleHelper.setLocale(this, lang);[m
[32m+[m[32m        resources = context.getResources();[m
[32m+[m[32m        ((Button)findViewById(R.id.level1_btn)).setText(resources.getText(R.string.Easy_txt));[m
[32m+[m[32m        ((Button)findViewById(R.id.level2_btn)).setText(resources.getText(R.string.Medium_txt));[m
[32m+[m[32m        ((Button)findViewById(R.id.level3_btn)).setText(resources.getText(R.string.Hard_txt));[m
[32m+[m[32m        ((Switch)findViewById(R.id.switch_music)).setText(resources.getText(R.string.music_txt));[m
[32m+[m[32m        ((Button)findViewById(R.id.score_btn)).setText(resources.getText(R.string.scoreTable_txt));[m
[32m+[m[32m        ((Button)findViewById(R.id.logout_btn)).setText(resources.getText(R.string.Logout_btn_txt));[m
[32m+[m[32m        ((TextView)findViewById(R.id.blessing)).setText(resources.getText(R.string.blessing_txt));[m
[32m+[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/app/src/main/java/com/example/funwithflags/Register.java b/app/src/main/java/com/example/funwithflags/Register.java[m
[1mnew file mode 100644[m
[1mindex 0000000..c13b010[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/java/com/example/funwithflags/Register.java[m
[36m@@ -0,0 +1,89 @@[m
[32m+[m[32mpackage com.example.funwithflags;[m
[32m+[m
[32m+[m[32mimport android.content.Context;[m
[32m+[m[32mimport android.content.Intent;[m
[32m+[m[32mimport android.content.res.Resources;[m
[32m+[m[32mimport android.os.Bundle;[m
[32m+[m[32mimport android.widget.Button;[m
[32m+[m[32mimport android.widget.CheckBox;[m
[32m+[m[32mimport android.widget.EditText;[m
[32m+[m[32mimport android.widget.RadioButton;[m
[32m+[m[32mimport android.widget.TextView;[m
[32m+[m[32mimport android.widget.Toast;[m
[32m+[m
[32m+[m[32mimport androidx.appcompat.app.AppCompatActivity;[m
[32m+[m
[32m+[m[32mimport java.util.ArrayList;[m
[32m+[m[32mimport java.util.Locale;[m
[32m+[m[32mimport java.util.concurrent.Callable;[m
[32m+[m[32mimport java.util.concurrent.ExecutionException;[m
[32m+[m[32mimport java.util.concurrent.Executor;[m
[32m+[m[32mimport java.util.concurrent.ExecutorService;[m
[32m+[m[32mimport java.util.concurrent.Executors;[m
[32m+[m[32mimport java.util.concurrent.Future;[m
[32m+[m[32mimport java.util.concurrent.FutureTask;[m
[32m+[m
[32m+[m[32mimport firebase.Firebase;[m
[32m+[m[32mimport models.User;[m
[32m+[m
[32m+[m[32mpublic class Register extends AppCompatActivity  {[m
[32m+[m[32m    @Override[m
[32m+[m[32m    protected void onCreate(Bundle savedInstanceState) {[m
[32m+[m[32m        super.onCreate(savedInstanceState);[m
[32m+[m[32m        setContentView(R.layout.register);[m
[32m+[m[32m        Intent intentFromMain = getIntent();[m
[32m+[m
[32m+[m[32m        //register page[m
[32m+[m[32m        findViewById(R.id.btn_register).setOnClickListener(view -> {[m
[32m+[m
[32m+[m[32m            String email = ((EditText) findViewById(R.id.email)).getText().toString().toLowerCase(Locale.ROOT);[m
[32m+[m[32m            String userName = ((EditText) findViewById(R.id.userName)).getText().toString().toLowerCase(Locale.ROOT);[m
[32m+[m[32m            String password = ((EditText) findViewById(R.id.mypass)).getText().toString();[m
[32m+[m[32m            if ((!email.equals("")) && (!userName.equals("")) && (!password.equals(""))) {[m
[32m+[m[32m                ArrayList<User> allUsers = Firebase.getAllUsers();[m
[32m+[m[32m                for (User user: allUsers){[m
[32m+[m[32m                    if((user.getEmail()).equals(email)) {[m
[32m+[m[32m                        Toast.makeText(this.getBaseContext(), "Email already taken, try again", Toast.LENGTH_LONG).show();[m
[32m+[m[32m                        return;[m
[32m+[m[32m                    }[m
[32m+[m[32m                }[m
[32m+[m[32m                new Thread(() -> Firebase.PostNewUser(userName, email, password)).start();[m
[32m+[m
[32m+[m[32m                Intent firstIntent = new Intent(this,Menu.class);[m
[32m+[m[32m                firstIntent.putExtra("user",new User(email,userName,password));[m
[32m+[m[32m                startActivity(firstIntent);[m
[32m+[m
[32m+[m[32m                Toast.makeText(this.getBaseContext(), "Register successfully", Toast.LENGTH_LONG).show();[m
[32m+[m[32m                return;[m
[32m+[m[32m            } else {[m
[32m+[m[32m                Toast.makeText(this.getBaseContext(), "Please fill all the fields", Toast.LENGTH_LONG).show();[m
[32m+[m
[32m+[m[32m            }[m
[32m+[m[32m        });[m
[32m+[m
[32m+[m
[32m+[m[32m        if(MainActivity.languageFlag==1) translate_register("he");[m
[32m+[m[32m        else translate_register("en");[m
[32m+[m
[32m+[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m
[32m+[m[32m    //language changer[m
[32m+[m[32m    public void translate_register(String lang)[m
[32m+[m[32m    {[m
[32m+[m[32m        Context context;[m
[32m+[m[32m        Resources resources;[m
[32m+[m[32m        context = LocaleHelper.setLocale(this, lang);[m
[32m+[m[32m        resources = context.getResources();[m
[32m+[m[32m        ((Button)findViewById(R.id.btn_register)).setText(resources.getText(R.string.register_txt));[m
[32m+[m[32m        ((EditText)findViewById(R.id.userName)).setHint(resources.getText(R.string.user_txt));[m
[32m+[m[32m        ((EditText)findViewById(R.id.email)).setHint(resources.getText(R.string.email_txt));[m
[32m+[m[32m        ((EditText)findViewById(R.id.mypass)).setHint(resources.getText(R.string.password_txt));[m
[32m+[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32m}[m
[32m+[m
[1mdiff --git a/app/src/main/java/com/example/funwithflags/ScoreList.java b/app/src/main/java/com/example/funwithflags/ScoreList.java[m
[1mnew file mode 100644[m
[1mindex 0000000..15bf5d4[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/java/com/example/funwithflags/ScoreList.java[m
[36m@@ -0,0 +1,79 @@[m
[32m+[m[32mpackage com.example.funwithflags;[m
[32m+[m
[32m+[m[32mimport android.content.Context;[m
[32m+[m[32mimport android.content.Intent;[m
[32m+[m[32mimport android.content.res.Resources;[m
[32m+[m[32mimport android.os.Bundle;[m
[32m+[m[32mimport android.widget.ArrayAdapter;[m
[32m+[m[32mimport android.widget.Button;[m
[32m+[m[32mimport android.widget.EditText;[m
[32m+[m[32mimport android.widget.ListView;[m
[32m+[m[32mimport android.widget.TextView;[m
[32m+[m
[32m+[m[32mimport androidx.appcompat.app.AppCompatActivity;[m
[32m+[m
[32m+[m[32mimport java.util.ArrayList;[m
[32m+[m[32mimport java.util.Arrays;[m
[32m+[m[32mimport java.util.Collections;[m
[32m+[m[32mimport java.util.Comparator;[m
[32m+[m
[32m+[m[32mimport firebase.Firebase;[m
[32m+[m[32mimport models.ScoreUser;[m
[32m+[m[32mimport models.User;[m
[32m+[m
[32m+[m[32mpublic class ScoreList extends AppCompatActivity {[m
[32m+[m
[32m+[m
[32m+[m[32m    @Override[m
[32m+[m[32m    protected void onCreate(Bundle savedInstanceState) {[m
[32m+[m[32m        super.onCreate(savedInstanceState);[m
[32m+[m[32m        setContentView(R.layout.scorelist);[m
[32m+[m
[32m+[m[32m        User user = (User) getIntent().getSerializableExtra("user");[m
[32m+[m[32m        ListView list = (ListView) findViewById(R.id.theList);[m
[32m+[m
[32m+[m
[32m+[m[32m        ArrayList<ScoreUser> usersScore = Firebase.getUsersScore();[m
[32m+[m[32m        Collections.sort(usersScore, new Comparator<ScoreUser>() {[m
[32m+[m[32m            @Override public int compare(ScoreUser p1, ScoreUser p2) {[m
[32m+[m[32m                return p2.getScore() - p1.getScore();[m
[32m+[m[32m            }[m
[32m+[m[32m        });[m
[32m+[m
[32m+[m[32m        int rate=0;[m
[32m+[m[32m        ArrayList<String> details = new ArrayList<>();[m
[32m+[m[32m        for(ScoreUser s: usersScore) {[m
[32m+[m[32m            details.add((rate+=1) + ". " + s.getEmail() + " | " + s.getUserName() + " | " + s.getScore());[m
[32m+[m[32m        }[m
[32m+[m[32m        ArrayAdapter adapter = new ArrayAdapter(this, R.layout.listitem, details);[m
[32m+[m[32m        list.setAdapter(adapter);[m
[32m+[m
[32m+[m
[32m+[m[32m        findViewById(R.id.btn_score_to_menu).setOnClickListener(btn->{[m
[32m+[m[32m            Intent firstIntent = new Intent(this,Menu.class);[m
[32m+[m[32m            firstIntent.putExtra("user",user);[m
[32m+[m[32m            startActivity(firstIntent);[m
[32m+[m[32m        });[m
[32m+[m
[32m+[m
[32m+[m[32m        if(MainActivity.languageFlag==1) translate_score("he");[m
[32m+[m[32m        else translate_score("en");[m
[32m+[m
[32m+[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    //language changer[m
[32m+[m[32m    public void translate_score(String lang)[m
[32m+[m[32m    {[m
[32m+[m[32m        Context context;[m
[32m+[m[32m        Resources resources;[m
[32m+[m[32m        context = LocaleHelper.setLocale(this, lang);[m
[32m+[m[32m        resources = context.getResources();[m
[32m+[m[32m        ((Button)findViewById(R.id.btn_score_to_menu)).setText(resources.getText(R.string.tomenu_txt));[m
[32m+[m[32m        ((TextView)findViewById(R.id.score_title)).setText(resources.getText(R.string.score_title));[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[1mdiff --git a/app/src/main/java/com/example/funwithflags/SummaryScreen.java b/app/src/main/java/com/example/funwithflags/SummaryScreen.java[m
[1mnew file mode 100644[m
[1mindex 0000000..6f0e3da[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/java/com/example/funwithflags/SummaryScreen.java[m
[36m@@ -0,0 +1,83 @@[m
[32m+[m[32mpackage com.example.funwithflags;[m
[32m+[m
[32m+[m[32mimport android.content.Context;[m
[32m+[m[32mimport android.content.Intent;[m
[32m+[m[32mimport android.content.res.Resources;[m
[32m+[m[32mimport android.os.Bundle;[m
[32m+[m[32mimport android.os.Handler;[m
[32m+[m[32mimport android.widget.Button;[m
[32m+[m[32mimport android.widget.EditText;[m
[32m+[m[32mimport android.widget.TextView;[m
[32m+[m
[32m+[m[32mimport androidx.annotation.Nullable;[m
[32m+[m[32mimport androidx.appcompat.app.AppCompatActivity;[m
[32m+[m
[32m+[m[32mimport com.airbnb.lottie.LottieAnimationView;[m
[32m+[m[32mimport com.airbnb.lottie.LottieDrawable;[m
[32m+[m
[32m+[m[32mimport java.text.SimpleDateFormat;[m
[32m+[m[32mimport java.util.Calendar;[m
[32m+[m
[32m+[m[32mimport firebase.Firebase;[m
[32m+[m[32mimport models.Game;[m
[32m+[m[32mimport models.User;[m
[32m+[m
[32m+[m[32mpublic class SummaryScreen extends AppCompatActivity {[m
[32m+[m
[32m+[m
[32m+[m[32m    @Override[m
[32m+[m[32m    protected void onCreate(@Nullable Bundle savedInstanceState) {[m
[32m+[m[32m        super.onCreate(savedInstanceState);[m
[32m+[m[32m        setContentView(R.layout.summary_screen);[m
[32m+[m
[32m+[m[32m        LottieAnimationView animation;[m
[32m+[m
[32m+[m[32m        User user = (User) getIntent().getSerializableExtra("user");[m
[32m+[m[32m        Game game = (Game) getIntent().getSerializableExtra("game");[m
[32m+[m
[32m+[m
[32m+[m[32m        // using animation - Lottie[m
[32m+[m[32m        animation=(LottieAnimationView)findViewById(R.id.animation_txt);[m
[32m+[m[32m        if(game.currectAnswers>=15) animation.setAnimationFromUrl("https://assets2.lottiefiles.com/packages/lf20_lxededya.json");[m
[32m+[m[32m        else if(game.currectAnswers>=5) animation.setAnimationFromUrl("https://assets9.lottiefiles.com/packages/lf20_3hztdoha.json");[m
[32m+[m[32m        else animation.setAnimationFromUrl("https://assets6.lottiefiles.com/private_files/lf30_uDAsLk.json");[m
[32m+[m[32m        animation.animate().setDuration(6000);[m
[32m+[m
[32m+[m[32m        double score= (((double)(game.level*game.currectAnswers)/(double)game.totalTime))*100+game.heart;[m
[32m+[m[32m        ((TextView)findViewById(R.id.summery_name_result)).setText(user.getName());[m
[32m+[m[32m        ((TextView)findViewById(R.id.summery_level_result)).setText(String.valueOf(game.level));[m
[32m+[m[32m        ((TextView)findViewById(R.id.summery_score_result)).setText(String.valueOf((int)score));[m
[32m+[m[32m        ((TextView)findViewById(R.id.summery_time_result)).setText(String.valueOf(game.totalTime));[m
[32m+[m
[32m+[m
[32m+[m[32m        //and passing all information to firebase table[m
[32m+[m[32m        new Thread(() -> Firebase.PostUserScore(user,(int)score)).start();[m
[32m+[m
[32m+[m[32m        findViewById(R.id.to_menu_btn).setOnClickListener(btn->{[m
[32m+[m[32m            //back to menu[m
[32m+[m[32m            Intent firstIntent = new Intent(this, Menu.class);[m
[32m+[m[32m            firstIntent.putExtra("user",user);[m
[32m+[m[32m            startActivity(firstIntent);[m
[32m+[m[32m        });[m
[32m+[m
[32m+[m[32m        //language changer[m
[32m+[m[32m        if(MainActivity.languageFlag==1) translate_summary("he");[m
[32m+[m[32m        else translate_summary("en");[m
[32m+[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    //language changer[m
[32m+[m[32m    public void translate_summary(String lang)[m
[32m+[m[32m    {[m
[32m+[m[32m        Context context;[m
[32m+[m[32m        Resources resources;[m
[32m+[m[32m        context = LocaleHelper.setLocale(this, lang);[m
[32m+[m[32m        resources = context.getResources();[m
[32m+[m[32m        ((TextView)findViewById(R.id.summery_name)).setText(resources.getText(R.string.name));[m
[32m+[m[32m        ((TextView)findViewById(R.id.summery_level)).setText(resources.getText(R.string.level));[m
[32m+[m[32m        ((TextView)findViewById(R.id.summery_score)).setText(resources.getText(R.string.score));[m
[32m+[m[32m        ((TextView)findViewById(R.id.summery_time)).setText(resources.getText(R.string.time));[m
[32m+[m[32m        ((Button)findViewById(R.id.to_menu_btn)).setText(resources.getText(R.string.tomenu_txt));[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m}[m
[1mdiff --git a/app/src/main/java/firebase/Firebase.java b/app/src/main/java/firebase/Firebase.java[m
[1mnew file mode 100644[m
[1mindex 0000000..23a4233[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/java/firebase/Firebase.java[m
[36m@@ -0,0 +1,98 @@[m
[32m+[m[32mpackage firebase;[m
[32m+[m
[32m+[m
[32m+[m[32mimport com.google.gson.Gson;[m
[32m+[m[32mimport com.google.gson.reflect.TypeToken;[m
[32m+[m
[32m+[m[32mimport java.lang.reflect.Type;[m
[32m+[m[32mimport java.util.ArrayList;[m
[32m+[m[32mimport java.util.Collection;[m
[32m+[m[32mimport java.util.HashMap;[m
[32m+[m[32mimport java.util.List;[m
[32m+[m[32mimport java.util.concurrent.Callable;[m
[32m+[m[32mimport java.util.concurrent.ExecutionException;[m
[32m+[m[32mimport java.util.concurrent.ExecutorService;[m
[32m+[m[32mimport java.util.concurrent.Executors;[m
[32m+[m[32mimport java.util.concurrent.Future;[m
[32m+[m[32mimport java.util.concurrent.FutureTask;[m
[32m+[m
[32m+[m[32mimport Http.Http;[m
[32m+[m[32mimport models.Flag;[m
[32m+[m[32mimport models.FlagsCallable;[m
[32m+[m[32mimport models.RegisterCallable;[m
[32m+[m[32mimport models.ScoreCallable;[m
[32m+[m[32mimport models.ScoreUser;[m
[32m+[m[32mimport models.User;[m
[32m+[m
[32m+[m[32mpublic class Firebase {[m
[32m+[m
[32m+[m[32m    public static String url = "https://funwithflags-82a9a-default-rtdb.firebaseio.com/";[m
[32m+[m
[32m+[m[32m    public static String getUrl(String path) {[m
[32m+[m[32m        return url + path + ".json";[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m        public static void PostNewUser(String userName,String email, String password) {[m
[32m+[m[32m            Http http = new Http();[m
[32m+[m[32m            http.createUser(getUrl("users"),userName,email,password);[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public static void PostUserScore(User user,int score) {[m
[32m+[m[32m        Http http = new Http();[m
[32m+[m[32m        http.createScoreUser(getUrl("score"),user,score);[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32m    public static ArrayList<User> getAllUsers() {[m
[32m+[m[32m        FutureTask[] task = new FutureTask[1];[m
[32m+[m[32m        Callable callable = new RegisterCallable();[m
[32m+[m[32m        task[0] = new FutureTask(callable);[m
[32m+[m[32m        Thread thread = new Thread(task[0]);[m
[32m+[m[32m        thread.start();[m
[32m+[m[32m        try {[m
[32m+[m[32m            return (ArrayList<User>) task[0].get();[m
[32m+[m[32m        } catch (ExecutionException e) {[m
[32m+[m[32m            e.printStackTrace();[m
[32m+[m[32m        } catch (InterruptedException e) {[m
[32m+[m[32m            e.printStackTrace();[m
[32m+[m[32m        }[m
[32m+[m[32m        return null;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public static ArrayList<ArrayList<Flag>> getAllFlags(){[m
[32m+[m[32m        FutureTask[] task = new FutureTask[1];[m
[32m+[m[32m        Callable callable = new FlagsCallable();[m
[32m+[m[32m        task[0] = new FutureTask(callable);[m
[32m+[m[32m        Thread thread = new Thread(task[0]);[m
[32m+[m[32m        thread.start();[m
[32m+[m[32m        try {[m
[32m+[m[32m            return (ArrayList<ArrayList<Flag>>) task[0].get();[m
[32m+[m[32m        } catch (ExecutionException e) {[m
[32m+[m[32m            e.printStackTrace();[m
[32m+[m[32m        } catch (InterruptedException e) {[m
[32m+[m[32m            e.printStackTrace();[m
[32m+[m[32m        }[m
[32m+[m[32m        return null;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public static ArrayList<ScoreUser> getUsersScore(){[m
[32m+[m[32m        FutureTask[] task = new FutureTask[1];[m
[32m+[m[32m        Callable callable = new ScoreCallable();[m
[32m+[m[32m        task[0] = new FutureTask(callable);[m
[32m+[m[32m        Thread thread = new Thread(task[0]);[m
[32m+[m[32m        thread.start();[m
[32m+[m[32m        try {[m
[32m+[m[32m            return (ArrayList<ScoreUser>) task[0].get();[m
[32m+[m[32m        } catch (ExecutionException e) {[m
[32m+[m[32m            e.printStackTrace();[m
[32m+[m[32m        } catch (InterruptedException e) {[m
[32m+[m[32m            e.printStackTrace();[m
[32m+[m[32m        }[m
[32m+[m[32m        return null;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32m}[m
[1mdiff --git a/app/src/main/java/models/Flag.java b/app/src/main/java/models/Flag.java[m
[1mnew file mode 100644[m
[1mindex 0000000..7dc8f72[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/java/models/Flag.java[m
[36m@@ -0,0 +1,49 @@[m
[32m+[m[32mpackage models;[m
[32m+[m
[32m+[m[32mimport java.io.Serializable;[m
[32m+[m
[32m+[m[32mpublic class Flag implements Serializable {[m
[32m+[m[32m    private static final long serialVersionUID = 1L;[m
[32m+[m[32m    public int id,Level;[m
[32m+[m[32m    public String img,name;[m
[32m+[m
[32m+[m[32m    public Flag(int id, int Level,String img, String name) {[m
[32m+[m[32m        this.id = id;[m
[32m+[m[32m        this.Level = Level;[m
[32m+[m[32m        this.img = img;[m
[32m+[m[32m        this.name = name;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public void setId(int id) {[m
[32m+[m[32m        this.id = id;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public void setLevel(int level) {[m
[32m+[m[32m        Level = level;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public void setImg(String img) {[m
[32m+[m[32m        this.img = img;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public void setName(String name) {[m
[32m+[m[32m        this.name = name;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public int getId() {[m
[32m+[m[32m        return id;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public int getLevel() {[m
[32m+[m[32m        return Level;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public String getImg() {[m
[32m+[m[32m        return img;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public String getName() {[m
[32m+[m[32m        return name;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m}[m
[1mdiff --git a/app/src/main/java/models/FlagsCallable.java b/app/src/main/java/models/FlagsCallable.java[m
[1mnew file mode 100644[m
[1mindex 0000000..8aae4a8[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/java/models/FlagsCallable.java[m
[36m@@ -0,0 +1,17 @@[m
[32m+[m[32mpackage models;[m
[32m+[m
[32m+[m[32mimport java.util.ArrayList;[m
[32m+[m[32mimport java.util.concurrent.Callable;[m
[32m+[m
[32m+[m[32mimport Http.Http;[m
[32m+[m[32mimport firebase.Firebase;[m
[32m+[m
[32m+[m[32mpublic class FlagsCallable implements Callable {[m
[32m+[m
[32m+[m
[32m+[m[32m    @Override[m
[32m+[m[32m    public ArrayList<ArrayList<Flag>> call() throws Exception {[m
[32m+[m[32m        Http http = new Http();[m
[32m+[m[32m        return http.getFlags(Firebase.getUrl("flags"));[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[1mdiff --git a/app/src/main/java/models/Game.java b/app/src/main/java/models/Game.java[m
[1mnew file mode 100644[m
[1mindex 0000000..b43c06f[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/java/models/Game.java[m
[36m@@ -0,0 +1,15 @@[m
[32m+[m[32mpackage models;[m
[32m+[m
[32m+[m[32mimport java.io.Serializable;[m
[32m+[m
[32m+[m[32mpublic class Game implements Serializable {[m
[32m+[m[32m    private static final long serialVersionUID = 3L;[m
[32m+[m[32m    public int level,currectAnswers,totalTime,heart;[m
[32m+[m
[32m+[m[32m    public Game(int level) {[m
[32m+[m[32m        this.level = level;[m
[32m+[m[32m        this.totalTime = 0;[m
[32m+[m[32m        this.currectAnswers = 0;[m
[32m+[m[32m        this.heart = 3;[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[1mdiff --git a/app/src/main/java/models/Question.java b/app/src/main/java/models/Question.java[m
[1mnew file mode 100644[m
[1mindex 0000000..56d9496[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/java/models/Question.java[m
[36m@@ -0,0 +1,32 @@[m
[32m+[m[32mpackage models;[m
[32m+[m
[32m+[m[32mimport java.util.ArrayList;[m
[32m+[m[32mimport java.util.Collection;[m
[32m+[m[32mimport java.util.Collections;[m
[32m+[m[32mimport java.util.List;[m
[32m+[m[32mimport java.util.Random;[m
[32m+[m
[32m+[m[32mpublic class Question {[m
[32m+[m[32m    public Flag correctOption;[m
[32m+[m[32m    public List<Flag> options;[m
[32m+[m
[32m+[m[32m        // options=    //generate 4 flags randomly[m
[32m+[m[32m        // correctOption =   //random index[m
[32m+[m
[32m+[m
[32m+[m[32m    public Question(ArrayList<Flag> options) {[m
[32m+[m[32m        this.correctOption = options.get(new Random().nextInt(4));[m
[32m+[m[32m        this.options = options;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public static Question generateQuestion(ArrayList<Flag> flags) {[m
[32m+[m[32m       Collections.shuffle(flags);[m
[32m+[m[32m       Question question = new Question(new ArrayList<>(flags.subList(0,4)));[m
[32m+[m[32m       return question;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32m}[m
[1mdiff --git a/app/src/main/java/models/RegisterCallable.java b/app/src/main/java/models/RegisterCallable.java[m
[1mnew file mode 100644[m
[1mindex 0000000..f297076[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/java/models/RegisterCallable.java[m
[36m@@ -0,0 +1,15 @@[m
[32m+[m[32mpackage models;[m
[32m+[m
[32m+[m[32mimport java.util.ArrayList;[m
[32m+[m[32mimport java.util.concurrent.Callable;[m
[32m+[m
[32m+[m[32mimport Http.Http;[m
[32m+[m[32mimport firebase.Firebase;[m
[32m+[m
[32m+[m[32mpublic class RegisterCallable implements Callable {[m
[32m+[m[32m    @Override[m
[32m+[m[32m    public ArrayList<User> call() throws Exception {[m
[32m+[m[32m        Http http = new Http();[m
[32m+[m[32m        return http.<User>getUsers(Firebase.getUrl("users"));[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[1mdiff --git a/app/src/main/java/models/ScoreCallable.java b/app/src/main/java/models/ScoreCallable.java[m
[1mnew file mode 100644[m
[1mindex 0000000..77b530d[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/java/models/ScoreCallable.java[m
[36m@@ -0,0 +1,15 @@[m
[32m+[m[32mpackage models;[m
[32m+[m
[32m+[m[32mimport java.util.ArrayList;[m
[32m+[m[32mimport java.util.concurrent.Callable;[m
[32m+[m
[32m+[m[32mimport Http.Http;[m
[32m+[m[32mimport firebase.Firebase;[m
[32m+[m
[32m+[m[32mpublic class ScoreCallable implements Callable {[m
[32m+[m[32m    @Override[m
[32m+[m[32m        public ArrayList<ScoreUser> call() throws Exception {[m
[32m+[m[32m        Http http = new Http();[m
[32m+[m[32m        return http.getScore(Firebase.getUrl("score"));[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[1mdiff --git a/app/src/main/java/models/ScoreUser.java b/app/src/main/java/models/ScoreUser.java[m
[1mnew file mode 100644[m
[1mindex 0000000..45887a5[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/java/models/ScoreUser.java[m
[36m@@ -0,0 +1,27 @@[m
[32m+[m[32mpackage models;[m
[32m+[m
[32m+[m[32mpublic class ScoreUser {[m
[32m+[m[32m    String userName;[m
[32m+[m[32m    String email;[m
[32m+[m[32m    int score;[m
[32m+[m
[32m+[m[32m    public ScoreUser(String userName, String email, int score) {[m
[32m+[m[32m        this.userName = userName;[m
[32m+[m[32m        this.email = email;[m
[32m+[m[32m        this.score = score;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public String getUserName() {[m
[32m+[m[32m        return userName;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public String getEmail() {[m
[32m+[m[32m        return email;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public int getScore() {[m
[32m+[m[32m        return score;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m
[32m+[m[32m}[m
[1mdiff --git a/app/src/main/java/models/User.java b/app/src/main/java/models/User.java[m
[1mnew file mode 100644[m
[1mindex 0000000..8b7e98f[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/java/models/User.java[m
[36m@@ -0,0 +1,49 @@[m
[32m+[m[32mpackage models;[m
[32m+[m
[32m+[m[32mimport java.io.Serializable;[m
[32m+[m
[32m+[m[32mpublic class User implements Serializable {[m
[32m+[m[32m    private static final long serialVersionUID = 2L;[m
[32m+[m[32m    String email,userName,password;[m
[32m+[m
[32m+[m
[32m+[m[32m    public void setEmail(String email) {[m
[32m+[m[32m        this.email = email;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public void setName(String name) {[m
[32m+[m[32m        this.userName = name;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public void setPassword(String password) {[m
[32m+[m[32m        this.password = password;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public User(String email, String userName, String password) {[m
[32m+[m[32m        this.email = email;[m
[32m+[m[32m        this.userName = userName;[m
[32m+[m[32m        this.password = password;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    @Override[m
[32m+[m[32m    public String toString() {[m
[32m+[m[32m        return "User{" +[m
[32m+[m[32m                "email='" + email + '\'' +[m
[32m+[m[32m                ", userName='" + userName + '\'' +[m
[32m+[m[32m                ", password='" + password + '\'' +[m
[32m+[m[32m                '}';[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public String getEmail() {[m
[32m+[m[32m        return email;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m
[32m+[m[32m    public String getName() {[m
[32m+[m[32m        return userName;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public String getPassword() {[m
[32m+[m[32m        return password;[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[1mdiff --git a/app/src/main/res/drawable-v24/ic_launcher_foreground.xml b/app/src/main/res/drawable-v24/ic_launcher_foreground.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..2b068d1[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/res/drawable-v24/ic_launcher_foreground.xml[m
[36m@@ -0,0 +1,30 @@[m
[32m+[m[32m<vector xmlns:android="http://schemas.android.com/apk/res/android"[m
[32m+[m[32m    xmlns:aapt="http://schemas.android.com/aapt"[m
[32m+[m[32m    android:width="108dp"[m
[32m+[m[32m    android:height="108dp"[m
[32m+[m[32m    android:viewportWidth="108"[m
[32m+[m[32m    android:viewportHeight="108">[m
[32m+[m[32m    <path android:pathData="M31,63.928c0,0 6.4,-11 12.1,-13.1c7.2,-2.6 26,-1.4 26,-1.4l38.1,38.1L107,108.928l-32,-1L31,63.928z">[m
[32m+[m[32m        <aapt:attr name="android:fillColor">[m
[32m+[m[32m            <gradient[m
[32m+[m[32m                android:endX="85.84757"[m
[32m+[m[32m                android:endY="92.4963"[m
[32m+[m[32m                android:startX="42.9492"[m
[32m+[m[32m                android:startY="49.59793"[m
[32m+[m[32m                android:type="linear">[m
[32m+[m[32m                <item[m
[32m+[m[32m                    android:color="#44000000"[m
[32m+[m[32m                    android:offset="0.0" />[m
[32m+[m[32m                <item[m
[32m+[m[32m                    android:color="#00000000"[m
[32m+[m[32m                    android:offset="1.0" />[m
[32m+[m[32m            </gradient>[m
[32m+[m[32m        </aapt:attr>[m
[32m+[m[32m    </path>[m
[32m+[m[32m    <path[m
[32m+[m[32m        android:fillColor="#FFFFFF"[m
[32m+[m[32m        android:fillType="nonZero"[m
[32m+[m[32m        android:pathData="M65.3,45.828l3.8,-6.6c0.2,-0.4 0.1,-0.9 -0.3,-1.1c-0.4,-0.2 -0.9,-0.1 -1.1,0.3l-3.9,6.7c-6.3,-2.8 -13.4,-2.8 -19.7,0l-3.9,-6.7c-0.2,-0.4 -0.7,-0.5 -1.1,-0.3C38.8,38.328 38.7,38.828 38.9,39.228l3.8,6.6C36.2,49.428 31.7,56.028 31,63.928h46C76.3,56.028 71.8,49.428 65.3,45.828zM43.4,57.328c-0.8,0 -1.5,-0.5 -1.8,-1.2c-0.3,-0.7 -0.1,-1.5 0.4,-2.1c0.5,-0.5 1.4,-0.7 2.1,-0.4c0.7,0.3 1.2,1 1.2,1.8C45.3,56.528 44.5,57.328 43.4,57.328L43.4,57.328zM64.6,57.328c-0.8,0 -1.5,-0.5 -1.8,-1.2s-0.1,-1.5 0.4,-2.1c0.5,-0.5 1.4,-0.7 2.1,-0.4c0.7,0.3 1.2,1 1.2,1.8C66.5,56.528 65.6,57.328 64.6,57.328L64.6,57.328z"[m
[32m+[m[32m        android:strokeWidth="1"[m
[32m+[m[32m        android:strokeColor="#00000000" />[m
[32m+[m[32m</vector>[m
\ No newline at end of file[m
[1mdiff --git a/app/src/main/res/drawable/afghanistan.png b/app/src/main/res/drawable/afghanistan.png[m
[1mnew file mode 100644[m
[1mindex 0000000..ad607f5[m
Binary files /dev/null and b/app/src/main/res/drawable/afghanistan.png differ
[1mdiff --git a/app/src/main/res/drawable/albania.png b/app/src/main/res/drawable/albania.png[m
[1mnew file mode 100644[m
[1mindex 0000000..0f25f36[m
Binary files /dev/null and b/app/src/main/res/drawable/albania.png differ
[1mdiff --git a/app/src/main/res/drawable/algeria.png b/app/src/main/res/drawable/algeria.png[m
[1mnew file mode 100644[m
[1mindex 0000000..6332d56[m
Binary files /dev/null and b/app/src/main/res/drawable/algeria.png differ
[1mdiff --git a/app/src/main/res/drawable/andorra.png b/app/src/main/res/drawable/andorra.png[m
[1mnew file mode 100644[m
[1mindex 0000000..e232ab6[m
Binary files /dev/null and b/app/src/main/res/drawable/andorra.png differ
[1mdiff --git a/app/src/main/res/drawable/angola.png b/app/src/main/res/drawable/angola.png[m
[1mnew file mode 100644[m
[1mindex 0000000..f811dfa[m
Binary files /dev/null and b/app/src/main/res/drawable/angola.png differ
[1mdiff --git a/app/src/main/res/drawable/answer.xml b/app/src/main/res/drawable/answer.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..7c72b32[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/res/drawable/answer.xml[m
[36m@@ -0,0 +1,12 @@[m
[32m+[m[32m<?xml version="1.0" encoding="utf-8"?>[m
[32m+[m[32m<shape xmlns:android="http://schemas.android.com/apk/res/android"[m
[32m+[m[32m    android:shape="rectangle">[m
[32m+[m[32m    <solid android:color="@color/white"/>[m
[32m+[m[32m    <corners android:topRightRadius="100dp"[m
[32m+[m[32m        android:topLeftRadius="100dp"[m
[32m+[m[32m        android:bottomLeftRadius="100dp"[m
[32m+[m[32m        android:bottomRightRadius="100dp"/>[m
[32m+[m[32m    <stroke android:width="3dp"[m
[32m+[m[32m        android:color="@color/black" />[m
[32m+[m
[32m+[m[32m</shape>[m
[1mdiff --git a/app/src/main/res/drawable/antiguaandbarbuda.png b/app/src/main/res/drawable/antiguaandbarbuda.png[m
[1mnew file mode 100644[m
[1mindex 0000000..d6749f3[m
Binary files /dev/null and b/app/src/main/res/drawable/antiguaandbarbuda.png differ
[1mdiff --git a/app/src/main/res/drawable/argentina.png b/app/src/main/res/drawable/argentina.png[m
[1mnew file mode 100644[m
[1mindex 0000000..92519e8[m
Binary files /dev/null and b/app/src/main/res/drawable/argentina.png differ
[1mdiff --git a/app/src/main/res/drawable/armenia.png b/app/src/main/res/drawable/armenia.png[m
[1mnew file mode 100644[m
[1mindex 0000000..bf35e81[m
Binary files /dev/null and b/app/src/main/res/drawable/armenia.png differ
[1mdiff --git a/app/src/main/res/drawable/australia.png b/app/src/main/res/drawable/australia.png[m
[1mnew file mode 100644[m
[1mindex 0000000..b0be113[m
Binary files /dev/null and b/app/src/main/res/drawable/australia.png differ
[1mdiff --git a/app/src/main/res/drawable/austria.png b/app/src/main/res/drawable/austria.png[m
[1mnew file mode 100644[m
[1mindex 0000000..da2c02c[m
Binary files /dev/null and b/app/src/main/res/drawable/austria.png differ
[1mdiff --git a/app/src/main/res/drawable/azerbaijan.png b/app/src/main/res/drawable/azerbaijan.png[m
[1mnew file mode 100644[m
[1mindex 0000000..35c1502[m
Binary files /dev/null and b/app/src/main/res/drawable/azerbaijan.png differ
[1mdiff --git a/app/src/main/res/drawable/bahamas.png b/app/src/main/res/drawable/bahamas.png[m
[1mnew file mode 100644[m
[1mindex 0000000..5a5f4ee[m
Binary files /dev/null and b/app/src/main/res/drawable/bahamas.png differ
[1mdiff --git a/app/src/main/res/drawable/bahrain.png b/app/src/main/res/drawable/bahrain.png[m
[1mnew file mode 100644[m
[1mindex 0000000..18a205a[m
Binary files /dev/null and b/app/src/main/res/drawable/bahrain.png differ
[1mdiff --git a/app/src/main/res/drawable/bangladesh.png b/app/src/main/res/drawable/bangladesh.png[m
[1mnew file mode 100644[m
[1mindex 0000000..18490d1[m
Binary files /dev/null and b/app/src/main/res/drawable/bangladesh.png differ
[1mdiff --git a/app/src/main/res/drawable/barbados.png b/app/src/main/res/drawable/barbados.png[m
[1mnew file mode 100644[m
[1mindex 0000000..029bdb2[m
Binary files /dev/null and b/app/src/main/res/drawable/barbados.png differ
[1mdiff --git a/app/src/main/res/drawable/belarus.png b/app/src/main/res/drawable/belarus.png[m
[1mnew file mode 100644[m
[1mindex 0000000..fb2ec49[m
Binary files /dev/null and b/app/src/main/res/drawable/belarus.png differ
[1mdiff --git a/app/src/main/res/drawable/belgium.png b/app/src/main/res/drawable/belgium.png[m
[1mnew file mode 100644[m
[1mindex 0000000..555663b[m
Binary files /dev/null and b/app/src/main/res/drawable/belgium.png differ
[1mdiff --git a/app/src/main/res/drawable/belize.png b/app/src/main/res/drawable/belize.png[m
[1mnew file mode 100644[m
[1mindex 0000000..4ce12be[m
Binary files /dev/null and b/app/src/main/res/drawable/belize.png differ
[1mdiff --git a/app/src/main/res/drawable/benin.png b/app/src/main/res/drawable/benin.png[m
[1mnew file mode 100644[m
[1mindex 0000000..92a5224[m
Binary files /dev/null and b/app/src/main/res/drawable/benin.png differ
[1mdiff --git a/app/src/main/res/drawable/bhutan.png b/app/src/main/res/drawable/bhutan.png[m
[1mnew file mode 100644[m
[1mindex 0000000..da3fc16[m
Binary files /dev/null and b/app/src/main/res/drawable/bhutan.png differ
[1mdiff --git a/app/src/main/res/drawable/bolivia.png b/app/src/main/res/drawable/bolivia.png[m
[1mnew file mode 100644[m
[1mindex 0000000..732a26e[m
Binary files /dev/null and b/app/src/main/res/drawable/bolivia.png differ
[1mdiff --git a/app/src/main/res/drawable/bosniaandherzegovina.png b/app/src/main/res/drawable/bosniaandherzegovina.png[m
[1mnew file mode 100644[m
[1mindex 0000000..5487821[m
Binary files /dev/null and b/app/src/main/res/drawable/bosniaandherzegovina.png differ
[1mdiff --git a/app/src/main/res/drawable/botswana.png b/app/src/main/res/drawable/botswana.png[m
[1mnew file mode 100644[m
[1mindex 0000000..8a1aa95[m
Binary files /dev/null and b/app/src/main/res/drawable/botswana.png differ
[1mdiff --git a/app/src/main/res/drawable/bottom_bg.xml b/app/src/main/res/drawable/bottom_bg.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..09368e5[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/res/drawable/bottom_bg.xml[m
[36m@@ -0,0 +1,7 @@[m
[32m+[m[32m<?xml version="1.0" encoding="utf-8"?>[m
[32m+[m[32m<shape xmlns:android="http://schemas.android.com/apk/res/android"[m
[32m+[m[32m    android:shape="rectangle">[m
[32m+[m[32m    <solid android:color="@color/red"/>[m
[32m+[m[32m    <corners android:topRightRadius="200dp"/>[m
[32m+[m
[32m+[m[32m</shape>[m
[1mdiff --git a/app/src/main/res/drawable/botton_shape.xml b/app/src/main/res/drawable/botton_shape.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..f946092[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/res/drawable/botton_shape.xml[m
[36m@@ -0,0 +1,5 @@[m
[32m+[m[32m<?xml version="1.0" encoding="utf-8"?>[m
[32m+[m[32m<shape xmlns:android="http://schemas.android.com/apk/res/android"[m
[32m+[m[32m    android:shape="rectangle">[m
[32m+[m[32m    <solid android:color="@color/red"/>[m
[32m+[m[32m</shape>[m
[1mdiff --git a/app/src/main/res/drawable/brazil.png b/app/src/main/res/drawable/brazil.png[m
[1mnew file mode 100644[m
[1mindex 0000000..bfbbf82[m
Binary files /dev/null and b/app/src/main/res/drawable/brazil.png differ
[1mdiff --git a/app/src/main/res/drawable/bruneidarussalam.png b/app/src/main/res/drawable/bruneidarussalam.png[m
[1mnew file mode 100644[m
[1mindex 0000000..1a55bc4[m
Binary files /dev/null and b/app/src/main/res/drawable/bruneidarussalam.png differ
[1mdiff --git a/app/src/main/res/drawable/bulgaria.png b/app/src/main/res/drawable/bulgaria.png[m
[1mnew file mode 100644[m
[1mindex 0000000..b267511[m
Binary files /dev/null and b/app/src/main/res/drawable/bulgaria.png differ
[1mdiff --git a/app/src/main/res/drawable/burkinafaso.png b/app/src/main/res/drawable/burkinafaso.png[m
[1mnew file mode 100644[m
[1mindex 0000000..d9be29b[m
Binary files /dev/null and b/app/src/main/res/drawable/burkinafaso.png differ
[1mdiff --git a/app/src/main/res/drawable/burundi.png b/app/src/main/res/drawable/burundi.png[m
[1mnew file mode 100644[m
[1mindex 0000000..0a89c40[m
Binary files /dev/null and b/app/src/main/res/drawable/burundi.png differ
[1mdiff --git a/app/src/main/res/drawable/caboverde.png b/app/src/main/res/drawable/caboverde.png[m
[1mnew file mode 100644[m
[1mindex 0000000..723ab37[m
Binary files /dev/null and b/app/src/main/res/drawable/caboverde.png differ
[1mdiff --git a/app/src/main/res/drawable/cambodia.png b/app/src/main/res/drawable/cambodia.png[m
[1mnew file mode 100644[m
[1mindex 0000000..ff219bd[m
Binary files /dev/null and b/app/src/main/res/drawable/cambodia.png differ
[1mdiff --git a/app/src/main/res/drawable/cameroon.png b/app/src/main/res/drawable/cameroon.png[m
[1mnew file mode 100644[m
[1mindex 0000000..0effb5d[m
Binary files /dev/null and b/app/src/main/res/drawable/cameroon.png differ
[1mdiff --git a/app/src/main/res/drawable/canada.png b/app/src/main/res/drawable/canada.png[m
[1mnew file mode 100644[m
[1mindex 0000000..1873e9c[m
Binary files /dev/null and b/app/src/main/res/drawable/canada.png differ
[1mdiff --git a/app/src/main/res/drawable/centralafricanrepublic.png b/app/src/main/res/drawable/centralafricanrepublic.png[m
[1mnew file mode 100644[m
[1mindex 0000000..25db063[m
Binary files /dev/null and b/app/src/main/res/drawable/centralafricanrepublic.png differ
[1mdiff --git a/app/src/main/res/drawable/chad.png b/app/src/main/res/drawable/chad.png[m
[1mnew file mode 100644[m
[1mindex 0000000..fc2e50a[m
Binary files /dev/null and b/app/src/main/res/drawable/chad.png differ
[1mdiff --git a/app/src/main/res/drawable/chile.png b/app/src/main/res/drawable/chile.png[m
[1mnew file mode 100644[m
[1mindex 0000000..4745f70[m
Binary files /dev/null and b/app/src/main/res/drawable/chile.png differ
[1mdiff --git a/app/src/main/res/drawable/china.png b/app/src/main/res/drawable/china.png[m
[1mnew file mode 100644[m
[1mindex 0000000..f684a88[m
Binary files /dev/null and b/app/src/main/res/drawable/china.png differ
[1mdiff --git a/app/src/main/res/drawable/colombia.png b/app/src/main/res/drawable/colombia.png[m
[1mnew file mode 100644[m
[1mindex 0000000..f439d4a[m
Binary files /dev/null and b/app/src/main/res/drawable/colombia.png differ
[1mdiff --git a/app/src/main/res/drawable/comoros.png b/app/src/main/res/drawable/comoros.png[m
[1mnew file mode 100644[m
[1mindex 0000000..afe9522[m
Binary files /dev/null and b/app/src/main/res/drawable/comoros.png differ
[1mdiff --git a/app/src/main/res/drawable/congo.png b/app/src/main/res/drawable/congo.png[m
[1mnew file mode 100644[m
[1mindex 0000000..e4f4cfe[m
Binary files /dev/null and b/app/src/main/res/drawable/congo.png differ
[1mdiff --git a/app/src/main/res/drawable/costarica.png b/app/src/main/res/drawable/costarica.png[m
[1mnew file mode 100644[m
[1mindex 0000000..f782673[m
Binary files /dev/null and b/app/src/main/res/drawable/costarica.png differ
[1mdiff --git a/app/src/main/res/drawable/create_account_btn.xml b/app/src/main/res/drawable/create_account_btn.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..917a390[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/res/drawable/create_account_btn.xml[m
[36m@@ -0,0 +1,9 @@[m
[32m+[m[32m<?xml version="1.0" encoding="utf-8"?>[m
[32m+[m[32m<shape xmlns:android="http://schemas.android.com/apk/res/android"[m
[32m+[m[32m    android:shape="rectangle">[m
[32m+[m[32m    <solid android:color="@color/white"/>[m
[32m+[m[32m    <stroke[m
[32m+[m[32m        android:width="2dp"[m
[32m+[m[32m        android:color="@color/red" />[m
[32m+[m
[32m+[m[32m</shape>[m
[1mdiff --git a/app/src/main/res/drawable/croatia.png b/app/src/main/res/drawable/croatia.png[m
[1mnew file mode 100644[m
[1mindex 0000000..ba7d7de[m
Binary files /dev/null and b/app/src/main/res/drawable/croatia.png differ
[1mdiff --git a/app/src/main/res/drawable/cuba.png b/app/src/main/res/drawable/cuba.png[m
[1mnew file mode 100644[m
[1mindex 0000000..861c435[m
Binary files /dev/null and b/app/src/main/res/drawable/cuba.png differ
[1mdiff --git a/app/src/main/res/drawable/cyprus.png b/app/src/main/res/drawable/cyprus.png[m
[1mnew file mode 100644[m
[1mindex 0000000..8ad22e7[m
Binary files /dev/null and b/app/src/main/res/drawable/cyprus.png differ
[1mdiff --git a/app/src/main/res/drawable/czechia.png b/app/src/main/res/drawable/czechia.png[m
[1mnew file mode 100644[m
[1mindex 0000000..90982b9[m
Binary files /dev/null and b/app/src/main/res/drawable/czechia.png differ
[1mdiff --git a/app/src/main/res/drawable/democraticrepublicofthecongo.png b/app/src/main/res/drawable/democraticrepublicofthecongo.png[m
[1mnew file mode 100644[m
[1mindex 0000000..e455c2e[m
Binary files /dev/null and b/app/src/main/res/drawable/democraticrepublicofthecongo.png differ
[1mdiff --git a/app/src/main/res/drawable/denmark.png b/app/src/main/res/drawable/denmark.png[m
[1mnew file mode 100644[m
[1mindex 0000000..ad7693b[m
Binary files /dev/null and b/app/src/main/res/drawable/denmark.png differ
[1mdiff --git a/app/src/main/res/drawable/djibouti.png b/app/src/main/res/drawable/djibouti.png[m
[1mnew file mode 100644[m
[1mindex 0000000..445c712[m
Binary files /dev/null and b/app/src/main/res/drawable/djibouti.png differ
[1mdiff --git a/app/src/main/res/drawable/dominica.png b/app/src/main/res/drawable/dominica.png[m
[1mnew file mode 100644[m
[1mindex 0000000..30ff8ae[m
Binary files /dev/null and b/app/src/main/res/drawable/dominica.png differ
[1mdiff --git a/app/src/main/res/drawable/dominicanrepublic.png b/app/src/main/res/drawable/dominicanrepublic.png[m
[1mnew file mode 100644[m
[1mindex 0000000..12fe119[m
Binary files /dev/null and b/app/src/main/res/drawable/dominicanrepublic.png differ
[1mdiff --git a/app/src/main/res/drawable/ecuador.png b/app/src/main/res/drawable/ecuador.png[m
[1mnew file mode 100644[m
[1mindex 0000000..0e6a832[m
Binary files /dev/null and b/app/src/main/res/drawable/ecuador.png differ
[1mdiff --git a/app/src/main/res/drawable/egypt.png b/app/src/main/res/drawable/egypt.png[m
[1mnew file mode 100644[m
[1mindex 0000000..4e6d74f[m
Binary files /dev/null and b/app/src/main/res/drawable/egypt.png differ
[1mdiff --git a/app/src/main/res/drawable/elsalvador.png b/app/src/main/res/drawable/elsalvador.png[m
[1mnew file mode 100644[m
[1mindex 0000000..9bf51d2[m
Binary files /dev/null and b/app/src/main/res/drawable/elsalvador.png differ
[1mdiff --git a/app/src/main/res/drawable/equatorialguinea.png b/app/src/main/res/drawable/equatorialguinea.png[m
[1mnew file mode 100644[m
[1mindex 0000000..bd1bd3e[m
Binary files /dev/null and b/app/src/main/res/drawable/equatorialguinea.png differ
[1mdiff --git a/app/src/main/res/drawable/eritrea.png b/app/src/main/res/drawable/eritrea.png[m
[1mnew file mode 100644[m
[1mindex 0000000..95fa006[m
Binary files /dev/null and b/app/src/main/res/drawable/eritrea.png differ
[1mdiff --git a/app/src/main/res/drawable/estonia.png b/app/src/main/res/drawable/estonia.png[m
[1mnew file mode 100644[m
[1mindex 0000000..327340e[m
Binary files /dev/null and b/app/src/main/res/drawable/estonia.png differ
[1mdiff --git a/app/src/main/res/drawable/eswatini.png b/app/src/main/res/drawable/eswatini.png[m
[1mnew file mode 100644[m
[1mindex 0000000..28d8416[m
Binary files /dev/null and b/app/src/main/res/drawable/eswatini.png differ
[1mdiff --git a/app/src/main/res/drawable/ethiopia.png b/app/src/main/res/drawable/ethiopia.png[m
[1mnew file mode 100644[m
[1mindex 0000000..2addd6c[m
Binary files /dev/null and b/app/src/main/res/drawable/ethiopia.png differ
[1mdiff --git a/app/src/main/res/drawable/fiji.png b/app/src/main/res/drawable/fiji.png[m
[1mnew file mode 100644[m
[1mindex 0000000..96ca4f2[m
Binary files /dev/null and b/app/src/main/res/drawable/fiji.png differ
[1mdiff --git a/app/src/main/res/drawable/finland.png b/app/src/main/res/drawable/finland.png[m
[1mnew file mode 100644[m
[1mindex 0000000..942e5e4[m
Binary files /dev/null and b/app/src/main/res/drawable/finland.png differ
[1mdiff --git a/app/src/main/res/drawable/france.png b/app/src/main/res/drawable/france.png[m
[1mnew file mode 100644[m
[1mindex 0000000..f3805eb[m
Binary files /dev/null and b/app/src/main/res/drawable/france.png differ
[1mdiff --git a/app/src/main/res/drawable/gabon.png b/app/src/main/res/drawable/gabon.png[m
[1mnew file mode 100644[m
[1mindex 0000000..160b9b8[m
Binary files /dev/null and b/app/src/main/res/drawable/gabon.png differ
[1mdiff --git a/app/src/main/res/drawable/gambia.png b/app/src/main/res/drawable/gambia.png[m
[1mnew file mode 100644[m
[1mindex 0000000..e3089d6[m
Binary files /dev/null and b/app/src/main/res/drawable/gambia.png differ
[1mdiff --git a/app/src/main/res/drawable/game.xml b/app/src/main/res/drawable/game.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..a8b409b[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/res/drawable/game.xml[m
[36m@@ -0,0 +1,4 @@[m
[32m+[m[32m<?xml version="1.0" encoding="utf-8"?>[m
[32m+[m[32m<selector xmlns:android="http://schemas.android.com/apk/res/android">[m
[32m+[m
[32m+[m[32m</selector>[m
\ No newline at end of file[m
[1mdiff --git a/app/src/main/res/drawable/gamebackgroung.xml b/app/src/main/res/drawable/gamebackgroung.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..f7c1685[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/res/drawable/gamebackgroung.xml[m
[36m@@ -0,0 +1,11 @@[m
[32m+[m[32m<?xml version="1.0" encoding="utf-8"?>[m
[32m+[m[32m<shape xmlns:android="http://schemas.android.com/apk/res/android"[m
[32m+[m[32m    xmlns:tools="http://schemas.android.com/tools"[m
[32m+[m[32m    android:shape="rectangle"[m
[32m+[m[32m    tools:ignore="MissingDefaultResource">[m
[32m+[m
[32m+[m[32m    <gradient[m
[32m+[m[32m        android:angle="-90"[m
[32m+[m[32m        android:endColor="@color/red"[m
[32m+[m[32m        android:startColor="#CDDC39"/>[m
[32m+[m[32m</shape>[m
[1mdiff --git a/app/src/main/res/drawable/georgia.png b/app/src/main/res/drawable/georgia.png[m
[1mnew file mode 100644[m
[1mindex 0000000..16fa38a[m
Binary files /dev/null and b/app/src/main/res/drawable/georgia.png differ
[1mdiff --git a/app/src/main/res/drawable/germany.png b/app/src/main/res/drawable/germany.png[m
[1mnew file mode 100644[m
[1mindex 0000000..14d3676[m
Binary files /dev/null and b/app/src/main/res/drawable/germany.png differ
[1mdiff --git a/app/src/main/res/drawable/ghana.png b/app/src/main/res/drawable/ghana.png[m
[1mnew file mode 100644[m
[1mindex 0000000..bfce5aa[m
Binary files /dev/null and b/app/src/main/res/drawable/ghana.png differ
[1mdiff --git a/app/src/main/res/drawable/greece.png b/app/src/main/res/drawable/greece.png[m
[1mnew file mode 100644[m
[1mindex 0000000..7014de8[m
Binary files /dev/null and b/app/src/main/res/drawable/greece.png differ
[1mdiff --git a/app/src/main/res/drawable/grenada.png b/app/src/main/res/drawable/grenada.png[m
[1mnew file mode 100644[m
[1mindex 0000000..e633066[m
Binary files /dev/null and b/app/src/main/res/drawable/grenada.png differ
[1mdiff --git a/app/src/main/res/drawable/guatemala.png b/app/src/main/res/drawable/guatemala.png[m
[1mnew file mode 100644[m
[1mindex 0000000..8486a4f[m
Binary files /dev/null and b/app/src/main/res/drawable/guatemala.png differ
[1mdiff --git a/app/src/main/res/drawable/guinea.png b/app/src/main/res/drawable/guinea.png[m
[1mnew file mode 100644[m
[1mindex 0000000..25277a0[m
Binary files /dev/null and b/app/src/main/res/drawable/guinea.png differ
[1mdiff --git a/app/src/main/res/drawable/guineabissau.png b/app/src/main/res/drawable/guineabissau.png[m
[1mnew file mode 100644[m
[1mindex 0000000..5dcf889[m
Binary files /dev/null and b/app/src/main/res/drawable/guineabissau.png differ
[1mdiff --git a/app/src/main/res/drawable/guyana.png b/app/src/main/res/drawable/guyana.png[m
[1mnew file mode 100644[m
[1mindex 0000000..e51a77b[m
Binary files /dev/null and b/app/src/main/res/drawable/guyana.png differ
[1mdiff --git a/app/src/main/res/drawable/haiti.png b/app/src/main/res/drawable/haiti.png[m
[1mnew file mode 100644[m
[1mindex 0000000..b3eb681[m
Binary files /dev/null and b/app/src/main/res/drawable/haiti.png differ
[1mdiff --git a/app/src/main/res/drawable/header_bg.xml b/app/src/main/res/drawable/header_bg.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..dab82a4[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/res/drawable/header_bg.xml[m
[36m@@ -0,0 +1,7 @@[m
[32m+[m[32m<?xml version="1.0" encoding="utf-8"?>[m
[32m+[m[32m<shape xmlns:android="http://schemas.android.com/apk/res/android"[m
[32m+[m[32m    android:shape="rectangle">[m
[32m+[m[32m    <solid android:color="@color/red"/>[m
[32m+[m[32m    <corners android:bottomLeftRadius="200dp"/>[m
[32m+[m
[32m+[m[32m</shape>[m
\ No newline at end of file[m
[1mdiff --git a/app/src/main/res/drawable/heart.png b/app/src/main/res/drawable/heart.png[m
[1mnew file mode 100644[m
[1mindex 0000000..5193356[m
Binary files /dev/null and b/app/src/main/res/drawable/heart.png differ
[1mdiff --git a/app/src/main/res/drawable/honduras.png b/app/src/main/res/drawable/honduras.png[m
[1mnew file mode 100644[m
[1mindex 0000000..43373a6[m
Binary files /dev/null and b/app/src/main/res/drawable/honduras.png differ
[1mdiff --git a/app/src/main/res/drawable/hungary.png b/app/src/main/res/drawable/hungary.png[m
[1mnew file mode 100644[m
[1mindex 0000000..5cc03df[m
Binary files /dev/null and b/app/src/main/res/drawable/hungary.png differ
[1mdiff --git a/app/src/main/res/drawable/iceland.png b/app/src/main/res/drawable/iceland.png[m
[1mnew file mode 100644[m
[1mindex 0000000..ff65d3b[m
Binary files /dev/null and b/app/src/main/res/drawable/iceland.png differ
[1mdiff --git a/app/src/main/res/drawable/india.png b/app/src/main/res/drawable/india.png[m
[1mnew file mode 100644[m
[1mindex 0000000..2709d71[m
Binary files /dev/null and b/app/src/main/res/drawable/india.png differ
[1mdiff --git a/app/src/main/res/drawable/indonesia.png b/app/src/main/res/drawable/indonesia.png[m
[1mnew file mode 100644[m
[1mindex 0000000..09dfe43[m
Binary files /dev/null and b/app/src/main/res/drawable/indonesia.png differ
[1mdiff --git a/app/src/main/res/drawable/iran.png b/app/src/main/res/drawable/iran.png[m
[1mnew file mode 100644[m
[1mindex 0000000..e4bff1f[m
Binary files /dev/null and b/app/src/main/res/drawable/iran.png differ
[1mdiff --git a/app/src/main/res/drawable/iraq.png b/app/src/main/res/drawable/iraq.png[m
[1mnew file mode 100644[m
[1mindex 0000000..6e80293[m
Binary files /dev/null and b/app/src/main/res/drawable/iraq.png differ
[1mdiff --git a/app/src/main/res/drawable/ireland.png b/app/src/main/res/drawable/ireland.png[m
[1mnew file mode 100644[m
[1mindex 0000000..dc687f0[m
Binary files /dev/null and b/app/src/main/res/drawable/ireland.png differ
[1mdiff --git a/app/src/main/res/drawable/israel.png b/app/src/main/res/drawable/israel.png[m
[1mnew file mode 100644[m
[1mindex 0000000..23b9531[m
Binary files /dev/null and b/app/src/main/res/drawable/israel.png differ
[1mdiff --git a/app/src/main/res/drawable/italy.png b/app/src/main/res/drawable/italy.png[m
[1mnew file mode 100644[m
[1mindex 0000000..4861c45[m
Binary files /dev/null and b/app/src/main/res/drawable/italy.png differ
[1mdiff --git a/app/src/main/res/drawable/jamaica.png b/app/src/main/res/drawable/jamaica.png[m
[1mnew file mode 100644[m
[1mindex 0000000..93e6339[m
Binary files /dev/null and b/app/src/main/res/drawable/jamaica.png differ
[1mdiff --git a/app/src/main/res/drawable/japan.png b/app/src/main/res/drawable/japan.png[m
[1mnew file mode 100644[m
[1mindex 0000000..833bdee[m
Binary files /dev/null and b/app/src/main/res/drawable/japan.png differ
[1mdiff --git a/app/src/main/res/drawable/jordan.png b/app/src/main/res/drawable/jordan.png[m
[1mnew file mode 100644[m
[1mindex 0000000..e812ff4[m
Binary files /dev/null and b/app/src/main/res/drawable/jordan.png differ
[1mdiff --git a/app/src/main/res/drawable/kazakhstan.png b/app/src/main/res/drawable/kazakhstan.png[m
[1mnew file mode 100644[m
[1mindex 0000000..3988ff8[m
Binary files /dev/null and b/app/src/main/res/drawable/kazakhstan.png differ
[1mdiff --git a/app/src/main/res/drawable/kenya.png b/app/src/main/res/drawable/kenya.png[m
[1mnew file mode 100644[m
[1mindex 0000000..74d9b95[m
Binary files /dev/null and b/app/src/main/res/drawable/kenya.png differ
[1mdiff --git a/app/src/main/res/drawable/kiribati.png b/app/src/main/res/drawable/kiribati.png[m
[1mnew file mode 100644[m
[1mindex 0000000..54cc5af[m
Binary files /dev/null and b/app/src/main/res/drawable/kiribati.png differ
[1mdiff --git a/app/src/main/res/drawable/kuwait.png b/app/src/main/res/drawable/kuwait.png[m
[1mnew file mode 100644[m
[1mindex 0000000..54af348[m
Binary files /dev/null and b/app/src/main/res/drawable/kuwait.png differ
[1mdiff --git a/app/src/main/res/drawable/kyrgyzstan.png b/app/src/main/res/drawable/kyrgyzstan.png[m
[1mnew file mode 100644[m
[1mindex 0000000..6e6411b[m
Binary files /dev/null and b/app/src/main/res/drawable/kyrgyzstan.png differ
[1mdiff --git a/app/src/main/res/drawable/laorepublic.png b/app/src/main/res/drawable/laorepublic.png[m
[1mnew file mode 100644[m
[1mindex 0000000..1d7a216[m
Binary files /dev/null and b/app/src/main/res/drawable/laorepublic.png differ
[1mdiff --git a/app/src/main/res/drawable/latvia.png b/app/src/main/res/drawable/latvia.png[m
[1mnew file mode 100644[m
[1mindex 0000000..987f17d[m
Binary files /dev/null and b/app/src/main/res/drawable/latvia.png differ
[1mdiff --git a/app/src/main/res/drawable/lebanon.png b/app/src/main/res/drawable/lebanon.png[m
[1mnew file mode 100644[m
[1mindex 0000000..1f9ffd1[m
Binary files /dev/null and b/app/src/main/res/drawable/lebanon.png differ
[1mdiff --git a/app/src/main/res/drawable/lesotho.png b/app/src/main/res/drawable/lesotho.png[m
[1mnew file mode 100644[m
[1mindex 0000000..0ff701b[m
Binary files /dev/null and b/app/src/main/res/drawable/lesotho.png differ
[1mdiff --git a/app/src/main/res/drawable/liberia.png b/app/src/main/res/drawable/liberia.png[m
[1mnew file mode 100644[m
[1mindex 0000000..32c23c8[m
Binary files /dev/null and b/app/src/main/res/drawable/liberia.png differ
[1mdiff --git a/app/src/main/res/drawable/libya.png b/app/src/main/res/drawable/libya.png[m
[1mnew file mode 100644[m
[1mindex 0000000..90b347d[m
Binary files /dev/null and b/app/src/main/res/drawable/libya.png differ
[1mdiff --git a/app/src/main/res/drawable/liechtenstein.png b/app/src/main/res/drawable/liechtenstein.png[m
[1mnew file mode 100644[m
[1mindex 0000000..e1d1eca[m
Binary files /dev/null and b/app/src/main/res/drawable/liechtenstein.png differ
[1mdiff --git a/app/src/main/res/drawable/lithuania.png b/app/src/main/res/drawable/lithuania.png[m
[1mnew file mode 100644[m
[1mindex 0000000..107decb[m
Binary files /dev/null and b/app/src/main/res/drawable/lithuania.png differ
[1mdiff --git a/app/src/main/res/drawable/luxembourg.png b/app/src/main/res/drawable/luxembourg.png[m
[1mnew file mode 100644[m
[1mindex 0000000..d7693c0[m
Binary files /dev/null and b/app/src/main/res/drawable/luxembourg.png differ
[1mdiff --git a/app/src/main/res/drawable/madagascar.png b/app/src/main/res/drawable/madagascar.png[m
[1mnew file mode 100644[m
[1mindex 0000000..ddac4d4[m
Binary files /dev/null and b/app/src/main/res/drawable/madagascar.png differ
[1mdiff --git a/app/src/main/res/drawable/malawi.png b/app/src/main/res/drawable/malawi.png[m
[1mnew file mode 100644[m
[1mindex 0000000..4327493[m
Binary files /dev/null and b/app/src/main/res/drawable/malawi.png differ
[1mdiff --git a/app/src/main/res/drawable/malaysia.png b/app/src/main/res/drawable/malaysia.png[m
[1mnew file mode 100644[m
[1mindex 0000000..1377d7f[m
Binary files /dev/null and b/app/src/main/res/drawable/malaysia.png differ
[1mdiff --git a/app/src/main/res/drawable/maldives.png b/app/src/main/res/drawable/maldives.png[m
[1mnew file mode 100644[m
[1mindex 0000000..caa1ccd[m
Binary files /dev/null and b/app/src/main/res/drawable/maldives.png differ
[1mdiff --git a/app/src/main/res/drawable/mali.png b/app/src/main/res/drawable/mali.png[m
[1mnew file mode 100644[m
[1mindex 0000000..c164ddf[m
Binary files /dev/null and b/app/src/main/res/drawable/mali.png differ
[1mdiff --git a/app/src/main/res/drawable/malta.png b/app/src/main/res/drawable/malta.png[m
[1mnew file mode 100644[m
[1mindex 0000000..bd1e322[m
Binary files /dev/null and b/app/src/main/res/drawable/malta.png differ
[1mdiff --git a/app/src/main/res/drawable/marshallislands.png b/app/src/main/res/drawable/marshallislands.png[m
[1mnew file mode 100644[m
[1mindex 0000000..e057157[m
Binary files /dev/null and b/app/src/main/res/drawable/marshallislands.png differ
[1mdiff --git a/app/src/main/res/drawable/mauritania.png b/app/src/main/res/drawable/mauritania.png[m
[1mnew file mode 100644[m
[1mindex 0000000..25a4aba[m
Binary files /dev/null and b/app/src/main/res/drawable/mauritania.png differ
[1mdiff --git a/app/src/main/res/drawable/mauritius.png b/app/src/main/res/drawable/mauritius.png[m
[1mnew file mode 100644[m
[1mindex 0000000..4b5d92f[m
Binary files /dev/null and b/app/src/main/res/drawable/mauritius.png differ
[1mdiff --git a/app/src/main/res/drawable/mexico.png b/app/src/main/res/drawable/mexico.png[m
[1mnew file mode 100644[m
[1mindex 0000000..0d19da8[m
Binary files /dev/null and b/app/src/main/res/drawable/mexico.png differ
[1mdiff --git a/app/src/main/res/drawable/micronesia.png b/app/src/main/res/drawable/micronesia.png[m
[1mnew file mode 100644[m
[1mindex 0000000..9d6011b[m
Binary files /dev/null and b/app/src/main/res/drawable/micronesia.png differ
[1mdiff --git a/app/src/main/res/drawable/moldovarepublic.png b/app/src/main/res/drawable/moldovarepublic.png[m
[1mnew file mode 100644[m
[1mindex 0000000..30321da[m
Binary files /dev/null and b/app/src/main/res/drawable/moldovarepublic.png differ
[1mdiff --git a/app/src/main/res/drawable/monaco.png b/app/src/main/res/drawable/monaco.png[m
[1mnew file mode 100644[m
[1mindex 0000000..4a26741[m
Binary files /dev/null and b/app/src/main/res/drawable/monaco.png differ
[1mdiff --git a/app/src/main/res/drawable/mongolia.png b/app/src/main/res/drawable/mongolia.png[m
[1mnew file mode 100644[m
[1mindex 0000000..10ed819[m
Binary files /dev/null and b/app/src/main/res/drawable/mongolia.png differ
[1mdiff --git a/app/src/main/res/drawable/montenegro.png b/app/src/main/res/drawable/montenegro.png[m
[1mnew file mode 100644[m
[1mindex 0000000..f3e1f53[m
Binary files /dev/null and b/app/src/main/res/drawable/montenegro.png differ
[1mdiff --git a/app/src/main/res/drawable/morocco.png b/app/src/main/res/drawable/morocco.png[m
[1mnew file mode 100644[m
[1mindex 0000000..c5374c6[m
Binary files /dev/null and b/app/src/main/res/drawable/morocco.png differ
[1mdiff --git a/app/src/main/res/drawable/mozambique.png b/app/src/main/res/drawable/mozambique.png[m
[1mnew file mode 100644[m
[1mindex 0000000..2683fdc[m
Binary files /dev/null and b/app/src/main/res/drawable/mozambique.png differ
[1mdiff --git a/app/src/main/res/drawable/myanmar.png b/app/src/main/res/drawable/myanmar.png[m
[1mnew file mode 100644[m
[1mindex 0000000..537cc82[m
Binary files /dev/null and b/app/src/main/res/drawable/myanmar.png differ
[1mdiff --git a/app/src/main/res/drawable/namibia.png b/app/src/main/res/drawable/namibia.png[m
[1mnew file mode 100644[m
[1mindex 0000000..9457b71[m
Binary files /dev/null and b/app/src/main/res/drawable/namibia.png differ
[1mdiff --git a/app/src/main/res/drawable/nauru.png b/app/src/main/res/drawable/nauru.png[m
[1mnew file mode 100644[m
[1mindex 0000000..689a2c6[m
Binary files /dev/null and b/app/src/main/res/drawable/nauru.png differ
[1mdiff --git a/app/src/main/res/drawable/nepal.png b/app/src/main/res/drawable/nepal.png[m
[1mnew file mode 100644[m
[1mindex 0000000..06c9c54[m
Binary files /dev/null and b/app/src/main/res/drawable/nepal.png differ
[1mdiff --git a/app/src/main/res/drawable/netherlands.png b/app/src/main/res/drawable/netherlands.png[m
[1mnew file mode 100644[m
[1mindex 0000000..f64e97d[m
Binary files /dev/null and b/app/src/main/res/drawable/netherlands.png differ
[1mdiff --git a/app/src/main/res/drawable/newzealand.png b/app/src/main/res/drawable/newzealand.png[m
[1mnew file mode 100644[m
[1mindex 0000000..933045a[m
Binary files /dev/null and b/app/src/main/res/drawable/newzealand.png differ
[1mdiff --git a/app/src/main/res/drawable/nicaragua.png b/app/src/main/res/drawable/nicaragua.png[m
[1mnew file mode 100644[m
[1mindex 0000000..66d173a[m
Binary files /dev/null and b/app/src/main/res/drawable/nicaragua.png differ
[1mdiff --git a/app/src/main/res/drawable/niger.png b/app/src/main/res/drawable/niger.png[m
[1mnew file mode 100644[m
[1mindex 0000000..5d94da5[m
Binary files /dev/null and b/app/src/main/res/drawable/niger.png differ
[1mdiff --git a/app/src/main/res/drawable/nigeria.png b/app/src/main/res/drawable/nigeria.png[m
[1mnew file mode 100644[m
[1mindex 0000000..97bebf6[m
Binary files /dev/null and b/app/src/main/res/drawable/nigeria.png differ
[1mdiff --git a/app/src/main/res/drawable/northkorea.png b/app/src/main/res/drawable/northkorea.png[m
[1mnew file mode 100644[m
[1mindex 0000000..1fa4473[m
Binary files /dev/null and b/app/src/main/res/drawable/northkorea.png differ
[1mdiff --git a/app/src/main/res/drawable/northmacedonia.png b/app/src/main/res/drawable/northmacedonia.png[m
[1mnew file mode 100644[m
[1mindex 0000000..76cba22[m
Binary files /dev/null and b/app/src/main/res/drawable/northmacedonia.png differ
[1mdiff --git a/app/src/main/res/drawable/norway.png b/app/src/main/res/drawable/norway.png[m
[1mnew file mode 100644[m
[1mindex 0000000..4924df6[m
Binary files /dev/null and b/app/src/main/res/drawable/norway.png differ
[1mdiff --git a/app/src/main/res/drawable/oman.png b/app/src/main/res/drawable/oman.png[m
[1mnew file mode 100644[m
[1mindex 0000000..e852030[m
Binary files /dev/null and b/app/src/main/res/drawable/oman.png differ
[1mdiff --git a/app/src/main/res/drawable/pakistan.png b/app/src/main/res/drawable/pakistan.png[m
[1mnew file mode 100644[m
[1mindex 0000000..903e2d0[m
Binary files /dev/null and b/app/src/main/res/drawable/pakistan.png differ
[1mdiff --git a/app/src/main/res/drawable/palau.png b/app/src/main/res/drawable/palau.png[m
[1mnew file mode 100644[m
[1mindex 0000000..13b0f03[m
Binary files /dev/null and b/app/src/main/res/drawable/palau.png differ
[1mdiff --git a/app/src/main/res/drawable/panama.png b/app/src/main/res/drawable/panama.png[m
[1mnew file mode 100644[m
[1mindex 0000000..3ef5da3[m
Binary files /dev/null and b/app/src/main/res/drawable/panama.png differ
[1mdiff --git a/app/src/main/res/drawable/papuanewguinea.png b/app/src/main/res/drawable/papuanewguinea.png[m
[1mnew file mode 100644[m
[1mindex 0000000..584ac62[m
Binary files /dev/null and b/app/src/main/res/drawable/papuanewguinea.png differ
[1mdiff --git a/app/src/main/res/drawable/paraguay.png b/app/src/main/res/drawable/paraguay.png[m
[1mnew file mode 100644[m
[1mindex 0000000..1548d05[m
Binary files /dev/null and b/app/src/main/res/drawable/paraguay.png differ
[1mdiff --git a/app/src/main/res/drawable/peru.png b/app/src/main/res/drawable/peru.png[m
[1mnew file mode 100644[m
[1mindex 0000000..6d82b4f[m
Binary files /dev/null and b/app/src/main/res/drawable/peru.png differ
[1mdiff --git a/app/src/main/res/drawable/philippines.png b/app/src/main/res/drawable/philippines.png[m
[1mnew file mode 100644[m
[1mindex 0000000..6138ace[m
Binary files /dev/null and b/app/src/main/res/drawable/philippines.png differ
[1mdiff --git a/app/src/main/res/drawable/poland.png b/app/src/main/res/drawable/poland.png[m
[1mnew file mode 100644[m
[1mindex 0000000..e3a9271[m
Binary files /dev/null and b/app/src/main/res/drawable/poland.png differ
[1mdiff --git a/app/src/main/res/drawable/portugal.png b/app/src/main/res/drawable/portugal.png[m
[1mnew file mode 100644[m
[1mindex 0000000..7b9302e[m
Binary files /dev/null and b/app/src/main/res/drawable/portugal.png differ
[1mdiff --git a/app/src/main/res/drawable/qatar.png b/app/src/main/res/drawable/qatar.png[m
[1mnew file mode 100644[m
[1mindex 0000000..2cb666e[m
Binary files /dev/null and b/app/src/main/res/drawable/qatar.png differ
[1mdiff --git a/app/src/main/res/drawable/romania.png b/app/src/main/res/drawable/romania.png[m
[1mnew file mode 100644[m
[1mindex 0000000..7df59da[m
Binary files /dev/null and b/app/src/main/res/drawable/romania.png differ
[1mdiff --git a/app/src/main/res/drawable/russianfederation.png b/app/src/main/res/drawable/russianfederation.png[m
[1mnew file mode 100644[m
[1mindex 0000000..ecf4f9d[m
Binary files /dev/null and b/app/src/main/res/drawable/russianfederation.png differ
[1mdiff --git a/app/src/main/res/drawable/rwanda.png b/app/src/main/res/drawable/rwanda.png[m
[1mnew file mode 100644[m
[1mindex 0000000..258f608[m
Binary files /dev/null and b/app/src/main/res/drawable/rwanda.png differ
[1mdiff --git a/app/src/main/res/drawable/saintkittsandnevis.png b/app/src/main/res/drawable/saintkittsandnevis.png[m
[1mnew file mode 100644[m
[1mindex 0000000..d9aa699[m
Binary files /dev/null and b/app/src/main/res/drawable/saintkittsandnevis.png differ
[1mdiff --git a/app/src/main/res/drawable/saintlucia.png b/app/src/main/res/drawable/saintlucia.png[m
[1mnew file mode 100644[m
[1mindex 0000000..38e9fe6[m
Binary files /dev/null and b/app/src/main/res/drawable/saintlucia.png differ
[1mdiff --git a/app/src/main/res/drawable/saintvincentandthegrenadines.png b/app/src/main/res/drawable/saintvincentandthegrenadines.png[m
[1mnew file mode 100644[m
[1mindex 0000000..3a36503[m
Binary files /dev/null and b/app/src/main/res/drawable/saintvincentandthegrenadines.png differ
[1mdiff --git a/app/src/main/res/drawable/samoa.png b/app/src/main/res/drawable/samoa.png[m
[1mnew file mode 100644[m
[1mindex 0000000..91a9a15[m
Binary files /dev/null and b/app/src/main/res/drawable/samoa.png differ
[1mdiff --git a/app/src/main/res/drawable/sanmarino.png b/app/src/main/res/drawable/sanmarino.png[m
[1mnew file mode 100644[m
[1mindex 0000000..e51e365[m
Binary files /dev/null and b/app/src/main/res/drawable/sanmarino.png differ
[1mdiff --git a/app/src/main/res/drawable/saotomeandprincipe.png b/app/src/main/res/drawable/saotomeandprincipe.png[m
[1mnew file mode 100644[m
[1mindex 0000000..4567d08[m
Binary files /dev/null and b/app/src/main/res/drawable/saotomeandprincipe.png differ
[1mdiff --git a/app/src/main/res/drawable/saudiarabia.png b/app/src/main/res/drawable/saudiarabia.png[m
[1mnew file mode 100644[m
[1mindex 0000000..019364c[m
Binary files /dev/null and b/app/src/main/res/drawable/saudiarabia.png differ
[1mdiff --git a/app/src/main/res/drawable/senegal.png b/app/src/main/res/drawable/senegal.png[m
[1mnew file mode 100644[m
[1mindex 0000000..b5bfee9[m
Binary files /dev/null and b/app/src/main/res/drawable/senegal.png differ
[1mdiff --git a/app/src/main/res/drawable/serbia.png b/app/src/main/res/drawable/serbia.png[m
[1mnew file mode 100644[m
[1mindex 0000000..f28baf0[m
Binary files /dev/null and b/app/src/main/res/drawable/serbia.png differ
[1mdiff --git a/app/src/main/res/drawable/seychelles.png b/app/src/main/res/drawable/seychelles.png[m
[1mnew file mode 100644[m
[1mindex 0000000..01e3ea3[m
Binary files /dev/null and b/app/src/main/res/drawable/seychelles.png differ
[1mdiff --git a/app/src/main/res/drawable/sierraleone.png b/app/src/main/res/drawable/sierraleone.png[m
[1mnew file mode 100644[m
[1mindex 0000000..3aa02f4[m
Binary files /dev/null and b/app/src/main/res/drawable/sierraleone.png differ
[1mdiff --git a/app/src/main/res/drawable/singapore.png b/app/src/main/res/drawable/singapore.png[m
[1mnew file mode 100644[m
[1mindex 0000000..30eced5[m
Binary files /dev/null and b/app/src/main/res/drawable/singapore.png differ
[1mdiff --git a/app/src/main/res/drawable/slovakia.png b/app/src/main/res/drawable/slovakia.png[m
[1mnew file mode 100644[m
[1mindex 0000000..36ce03c[m
Binary files /dev/null and b/app/src/main/res/drawable/slovakia.png differ
[1mdiff --git a/app/src/main/res/drawable/slovenia.png b/app/src/main/res/drawable/slovenia.png[m
[1mnew file mode 100644[m
[1mindex 0000000..117b5dd[m
Binary files /dev/null and b/app/src/main/res/drawable/slovenia.png differ
[1mdiff --git a/app/src/main/res/drawable/solomonislands.png b/app/src/main/res/drawable/solomonislands.png[m
[1mnew file mode 100644[m
[1mindex 0000000..7cfa8e4[m
Binary files /dev/null and b/app/src/main/res/drawable/solomonislands.png differ
[1mdiff --git a/app/src/main/res/drawable/somalia.png b/app/src/main/res/drawable/somalia.png[m
[1mnew file mode 100644[m
[1mindex 0000000..43e36d1[m
Binary files /dev/null and b/app/src/main/res/drawable/somalia.png differ
[1mdiff --git a/app/src/main/res/drawable/southafrica.png b/app/src/main/res/drawable/southafrica.png[m
[1mnew file mode 100644[m
[1mindex 0000000..ffea4a2[m
Binary files /dev/null and b/app/src/main/res/drawable/southafrica.png differ
[1mdiff --git a/app/src/main/res/drawable/southkorea.png b/app/src/main/res/drawable/southkorea.png[m
[1mnew file mode 100644[m
[1mindex 0000000..9b550ba[m
Binary files /dev/null and b/app/src/main/res/drawable/southkorea.png differ
[1mdiff --git a/app/src/main/res/drawable/southsudan.png b/app/src/main/res/drawable/southsudan.png[m
[1mnew file mode 100644[m
[1mindex 0000000..0085ad0[m
Binary files /dev/null and b/app/src/main/res/drawable/southsudan.png differ
[1mdiff --git a/app/src/main/res/drawable/spain.png b/app/src/main/res/drawable/spain.png[m
[1mnew file mode 100644[m
[1mindex 0000000..7c62f76[m
Binary files /dev/null and b/app/src/main/res/drawable/spain.png differ
[1mdiff --git a/app/src/main/res/drawable/srilanka.png b/app/src/main/res/drawable/srilanka.png[m
[1mnew file mode 100644[m
[1mindex 0000000..17f7634[m
Binary files /dev/null and b/app/src/main/res/drawable/srilanka.png differ
[1mdiff --git a/app/src/main/res/drawable/sudan.png b/app/src/main/res/drawable/sudan.png[m
[1mnew file mode 100644[m
[1mindex 0000000..ee62438[m
Binary files /dev/null and b/app/src/main/res/drawable/sudan.png differ
[1mdiff --git a/app/src/main/res/drawable/suriname.png b/app/src/main/res/drawable/suriname.png[m
[1mnew file mode 100644[m
[1mindex 0000000..e41913d[m
Binary files /dev/null and b/app/src/main/res/drawable/suriname.png differ
[1mdiff --git a/app/src/main/res/drawable/sweden.png b/app/src/main/res/drawable/sweden.png[m
[1mnew file mode 100644[m
[1mindex 0000000..a91ce78[m
Binary files /dev/null and b/app/src/main/res/drawable/sweden.png differ
[1mdiff --git a/app/src/main/res/drawable/switch_shape.xml b/app/src/main/res/drawable/switch_shape.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..9fee938[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/res/drawable/switch_shape.xml[m
[36m@@ -0,0 +1,18 @@[m
[32m+[m[32m<?xml version="1.0" encoding="utf-8"?>[m
[32m+[m[32m<shape xmlns:android="http://schemas.android.com/apk/res/android"[m
[32m+[m[32m    android:shape="rectangle" >[m
[32m+[m
[32m+[m
[32m+[m[32m    <padding[m
[32m+[m[32m        android:bottom="4dp"[m
[32m+[m[32m        android:left="2dp"[m
[32m+[m[32m        android:right="2dp"[m
[32m+[m[32m        android:top="4dp" />[m
[32m+[m
[32m+[m[32m    <stroke[m
[32m+[m[32m        android:width="3dp"[m
[32m+[m[32m        android:color="@color/red" />[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32m</shape>[m
\ No newline at end of file[m
[1mdiff --git a/app/src/main/res/drawable/switzerland.png b/app/src/main/res/drawable/switzerland.png[m
[1mnew file mode 100644[m
[1mindex 0000000..72a1439[m
Binary files /dev/null and b/app/src/main/res/drawable/switzerland.png differ
[1mdiff --git a/app/src/main/res/drawable/syrianarabrepublic.png b/app/src/main/res/drawable/syrianarabrepublic.png[m
[1mnew file mode 100644[m
[1mindex 0000000..bc3c612[m
Binary files /dev/null and b/app/src/main/res/drawable/syrianarabrepublic.png differ
[1mdiff --git a/app/src/main/res/drawable/tajikistan.png b/app/src/main/res/drawable/tajikistan.png[m
[1mnew file mode 100644[m
[1mindex 0000000..d6b4686[m
Binary files /dev/null and b/app/src/main/res/drawable/tajikistan.png differ
[1mdiff --git a/app/src/main/res/drawable/tanzania.png b/app/src/main/res/drawable/tanzania.png[m
[1mnew file mode 100644[m
[1mindex 0000000..5a8ef07[m
Binary files /dev/null and b/app/src/main/res/drawable/tanzania.png differ
[1mdiff --git a/app/src/main/res/drawable/thailand.png b/app/src/main/res/drawable/thailand.png[m
[1mnew file mode 100644[m
[1mindex 0000000..22691ea[m
Binary files /dev/null and b/app/src/main/res/drawable/thailand.png differ
[1mdiff --git a/app/src/main/res/drawable/timorleste.png b/app/src/main/res/drawable/timorleste.png[m
[1mnew file mode 100644[m
[1mindex 0000000..f8b06a1[m
Binary files /dev/null and b/app/src/main/res/drawable/timorleste.png differ
[1mdiff --git a/app/src/main/res/drawable/togo.png b/app/src/main/res/drawable/togo.png[m
[1mnew file mode 100644[m
[1mindex 0000000..6609476[m
Binary files /dev/null and b/app/src/main/res/drawable/togo.png differ
[1mdiff --git a/app/src/main/res/drawable/tonga.png b/app/src/main/res/drawable/tonga.png[m
[1mnew file mode 100644[m
[1mindex 0000000..271e005[m
Binary files /dev/null and b/app/src/main/res/drawable/tonga.png differ
[1mdiff --git a/app/src/main/res/drawable/trinidadandtobago.png b/app/src/main/res/drawable/trinidadandtobago.png[m
[1mnew file mode 100644[m
[1mindex 0000000..cfac76a[m
Binary files /dev/null and b/app/src/main/res/drawable/trinidadandtobago.png differ
[1mdiff --git a/app/src/main/res/drawable/tunisia.png b/app/src/main/res/drawable/tunisia.png[m
[1mnew file mode 100644[m
[1mindex 0000000..4af231d[m
Binary files /dev/null and b/app/src/main/res/drawable/tunisia.png differ
[1mdiff --git a/app/src/main/res/drawable/turkey.png b/app/src/main/res/drawable/turkey.png[m
[1mnew file mode 100644[m
[1mindex 0000000..b22b096[m
Binary files /dev/null and b/app/src/main/res/drawable/turkey.png differ
[1mdiff --git a/app/src/main/res/drawable/turkmenistan.png b/app/src/main/res/drawable/turkmenistan.png[m
[1mnew file mode 100644[m
[1mindex 0000000..42d17e0[m
Binary files /dev/null and b/app/src/main/res/drawable/turkmenistan.png differ
[1mdiff --git a/app/src/main/res/drawable/tuvalu.png b/app/src/main/res/drawable/tuvalu.png[m
[1mnew file mode 100644[m
[1mindex 0000000..f426f61[m
Binary files /dev/null and b/app/src/main/res/drawable/tuvalu.png differ
[1mdiff --git a/app/src/main/res/drawable/uganda.png b/app/src/main/res/drawable/uganda.png[m
[1mnew file mode 100644[m
[1mindex 0000000..2ab62ea[m
Binary files /dev/null and b/app/src/main/res/drawable/uganda.png differ
[1mdiff --git a/app/src/main/res/drawable/ukraine.png b/app/src/main/res/drawable/ukraine.png[m
[1mnew file mode 100644[m
[1mindex 0000000..05f07c1[m
Binary files /dev/null and b/app/src/main/res/drawable/ukraine.png differ
[1mdiff --git a/app/src/main/res/drawable/unitedarabemirates.png b/app/src/main/res/drawable/unitedarabemirates.png[m
[1mnew file mode 100644[m
[1mindex 0000000..ac0815b[m
Binary files /dev/null and b/app/src/main/res/drawable/unitedarabemirates.png differ
[1mdiff --git a/app/src/main/res/drawable/unitedkingdom.png b/app/src/main/res/drawable/unitedkingdom.png[m
[1mnew file mode 100644[m
[1mindex 0000000..790095e[m
Binary files /dev/null and b/app/src/main/res/drawable/unitedkingdom.png differ
[1mdiff --git a/app/src/main/res/drawable/unitedstatesofamerica.png b/app/src/main/res/drawable/unitedstatesofamerica.png[m
[1mnew file mode 100644[m
[1mindex 0000000..a488297[m
Binary files /dev/null and b/app/src/main/res/drawable/unitedstatesofamerica.png differ
[1mdiff --git a/app/src/main/res/drawable/uruguay.png b/app/src/main/res/drawable/uruguay.png[m
[1mnew file mode 100644[m
[1mindex 0000000..74fcf1e[m
Binary files /dev/null and b/app/src/main/res/drawable/uruguay.png differ
[1mdiff --git a/app/src/main/res/drawable/uzbekistan.png b/app/src/main/res/drawable/uzbekistan.png[m
[1mnew file mode 100644[m
[1mindex 0000000..ae19033[m
Binary files /dev/null and b/app/src/main/res/drawable/uzbekistan.png differ
[1mdiff --git a/app/src/main/res/drawable/vanuatu.png b/app/src/main/res/drawable/vanuatu.png[m
[1mnew file mode 100644[m
[1mindex 0000000..061a601[m
Binary files /dev/null and b/app/src/main/res/drawable/vanuatu.png differ
[1mdiff --git a/app/src/main/res/drawable/venezuela.png b/app/src/main/res/drawable/venezuela.png[m
[1mnew file mode 100644[m
[1mindex 0000000..5a90b7d[m
Binary files /dev/null and b/app/src/main/res/drawable/venezuela.png differ
[1mdiff --git a/app/src/main/res/drawable/vietnam.png b/app/src/main/res/drawable/vietnam.png[m
[1mnew file mode 100644[m
[1mindex 0000000..e3a6517[m
Binary files /dev/null and b/app/src/main/res/drawable/vietnam.png differ
[1mdiff --git a/app/src/main/res/drawable/yemen.png b/app/src/main/res/drawable/yemen.png[m
[1mnew file mode 100644[m
[1mindex 0000000..a1c4781[m
Binary files /dev/null and b/app/src/main/res/drawable/yemen.png differ
[1mdiff --git a/app/src/main/res/drawable/zambia.png b/app/src/main/res/drawable/zambia.png[m
[1mnew file mode 100644[m
[1mindex 0000000..ec5f68c[m
Binary files /dev/null and b/app/src/main/res/drawable/zambia.png differ
[1mdiff --git a/app/src/main/res/drawable/zimbabwe.png b/app/src/main/res/drawable/zimbabwe.png[m
[1mnew file mode 100644[m
[1mindex 0000000..e3ffa4a[m
Binary files /dev/null and b/app/src/main/res/drawable/zimbabwe.png differ
[1mdiff --git a/app/src/main/res/layout/activity_main.xml b/app/src/main/res/layout/activity_main.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..1b934cf[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/res/layout/activity_main.xml[m
[36m@@ -0,0 +1,68 @@[m
[32m+[m[32m<?xml version="1.0" encoding="utf-8"?>[m
[32m+[m[32m<RelativeLayout xmlns:android="http://schemas.android.com/apk/res/android"[m
[32m+[m[32mxmlns:app="http://schemas.android.com/apk/res-auto"[m
[32m+[m[32mxmlns:tools="http://schemas.android.com/tools"[m
[32m+[m[32mandroid:layout_width="match_parent"[m
[32m+[m[32mandroid:layout_height="match_parent"[m
[32m+[m[32mtools:context=".MainActivity"[m
[32m+[m[32m    android:background="@color/white">[m
[32m+[m
[32m+[m[32m    <View[m
[32m+[m[32m        android:id="@+id/header_view"[m
[32m+[m[32m        android:layout_width="match_parent"[m
[32m+[m[32m        android:layout_height="82dp"[m
[32m+[m[32m        android:background="@drawable/header_bg">[m
[32m+[m
[32m+[m[32m    </View>[m
[32m+[m
[32m+[m[32m    <TextView[m
[32m+[m[32m        android:layout_width="match_parent"[m
[32m+[m[32m        android:layout_height="wrap_content"[m
[32m+[m[32m        android:layout_alignParentStart="true"[m
[32m+[m[32m        android:layout_alignParentTop="true"[m
[32m+[m[32m        android:layout_alignParentEnd="true"[m
[32m+[m[32m        android:layout_marginStart="-1dp"[m
[32m+[m[32m        android:layout_marginTop="24dp"[m
[32m+[m[32m        android:layout_marginEnd="0dp"[m
[32m+[m[32m        android:gravity="center_horizontal"[m
[32m+[m[32m        android:text="@string/top_title"[m
[32m+[m[32m        android:textAlignment="center"[m
[32m+[m[32m        android:textColor="@color/colorWhite"[m
[32m+[m[32m        android:textSize="25sp"[m
[32m+[m[32m        android:textStyle="bold" />[m
[32m+[m
[32m+[m[32m    <LinearLayout[m
[32m+[m[32m    android:layout_width="match_parent"[m
[32m+[m[32m    android:layout_height="wrap_content"[m
[32m+[m[32m    android:layout_below="@+id/header_view"[m
[32m+[m[32m    android:orientation="vertical">[m
[32m+[m
[32m+[m[32m        <include[m
[32m+[m[32m            layout="@layout/loginform"[m
[32m+[m[32m            android:layout_width="match_parent"[m
[32m+[m[32m            android:layout_height="475dp"[m
[32m+[m[32m            android:layout_marginTop="10dp" />[m
[32m+[m
[32m+[m[32m        <LinearLayout[m
[32m+[m[32m        android:layout_width="match_parent"[m
[32m+[m[32m        android:layout_height="match_parent"[m
[32m+[m[32m        android:gravity="bottom">[m
[32m+[m
[32m+[m
[32m+[m[32m    </LinearLayout>[m
[32m+[m
[32m+[m[32m</LinearLayout>[m
[32m+[m
[32m+[m[32m    <View[m
[32m+[m[32m        android:layout_width="match_parent"[m
[32m+[m[32m        android:layout_height="74dp"[m
[32m+[m[32m        android:layout_alignParentEnd="true"[m
[32m+[m[32m        android:layout_alignParentBottom="true"[m
[32m+[m[32m        android:layout_marginEnd="0dp"[m
[32m+[m[32m        android:layout_marginBottom="0dp"[m
[32m+[m[32m        android:background="@drawable/bottom_bg" />[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32m</RelativeLayout>[m
\ No newline at end of file[m
[1mdiff --git a/app/src/main/res/layout/game_page.xml b/app/src/main/res/layout/game_page.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..478ba7e[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/res/layout/game_page.xml[m
[36m@@ -0,0 +1,161 @@[m
[32m+[m[32m<?xml version="1.0" encoding="utf-8"?>[m
[32m+[m[32m<androidx.constraintlayout.widget.ConstraintLayout xmlns:android="http://schemas.android.com/apk/res/android"[m
[32m+[m
[32m+[m[32m    xmlns:tools="http://schemas.android.com/tools"[m
[32m+[m[32m    android:layout_width="match_parent"[m
[32m+[m[32m    android:layout_height="match_parent"[m
[32m+[m[32m    xmlns:app="http://schemas.android.com/apk/res-auto"[m
[32m+[m[32m    android:background="@drawable/gamebackgroung">[m
[32m+[m
[32m+[m[32m    <android.widget.Button[m
[32m+[m[32m        android:id="@+id/btn_answer3"[m
[32m+[m[32m        android:hint="3"[m
[32m+[m[32m        android:layout_width="162dp"[m
[32m+[m[32m        android:layout_height="53dp"[m
[32m+[m[32m        android:background="@drawable/answer"[m
[32m+[m[32m        android:textColor="@color/red"[m
[32m+[m[32m        app:layout_constraintBottom_toBottomOf="parent"[m
[32m+[m[32m        app:layout_constraintEnd_toEndOf="parent"[m
[32m+[m[32m        app:layout_constraintHorizontal_bias="0.09"[m
[32m+[m[32m        app:layout_constraintStart_toStartOf="parent"[m
[32m+[m[32m        app:layout_constraintTop_toTopOf="parent"[m
[32m+[m[32m        app:layout_constraintVertical_bias="0.901" />[m
[32m+[m
[32m+[m[32m    <android.widget.Button[m
[32m+[m[32m        android:id="@+id/btn_answer4"[m
[32m+[m[32m        android:hint="4"[m
[32m+[m[32m        android:layout_width="162dp"[m
[32m+[m[32m        android:layout_height="53dp"[m
[32m+[m[32m        android:background="@drawable/answer"[m
[32m+[m[32m        android:textColor="@color/red"[m
[32m+[m
[32m+[m[32m        app:layout_constraintBottom_toBottomOf="parent"[m
[32m+[m[32m        app:layout_constraintEnd_toEndOf="parent"[m
[32m+[m[32m        app:layout_constraintHorizontal_bias="0.879"[m
[32m+[m[32m        app:layout_constraintStart_toStartOf="parent"[m
[32m+[m[32m        app:layout_constraintTop_toTopOf="parent"[m
[32m+[m[32m        app:layout_constraintVertical_bias="0.9" />[m
[32m+[m
[32m+[m[32m    <android.widget.Button[m
[32m+[m[32m        android:id="@+id/btn_answer1"[m
[32m+[m[32m        android:layout_width="162dp"[m
[32m+[m[32m        android:layout_height="53dp"[m
[32m+[m[32m        android:background="@drawable/answer"[m
[32m+[m[32m        android:hint="1"[m
[32m+[m[32m        android:textColor="@color/red"[m
[32m+[m[32m        app:layout_constraintBottom_toBottomOf="parent"[m
[32m+[m[32m        app:layout_constraintEnd_toEndOf="parent"[m
[32m+[m[32m        app:layout_constraintHorizontal_bias="0.088"[m
[32m+[m[32m        app:layout_constraintStart_toStartOf="parent"[m
[32m+[m[32m        app:layout_constraintTop_toTopOf="parent"[m
[32m+[m[32m        app:layout_constraintVertical_bias="0.729" />[m
[32m+[m
[32m+[m[32m    <android.widget.Button[m
[32m+[m[32m        android:id="@+id/btn_answer2"[m
[32m+[m[32m        android:hint="2"[m
[32m+[m[32m        android:layout_width="162dp"[m
[32m+[m[32m        android:layout_height="53dp"[m
[32m+[m[32m        android:background="@drawable/answer"[m
[32m+[m[32m        android:textColor="@color/red"[m
[32m+[m[32m        app:layout_constraintBottom_toBottomOf="parent"[m
[32m+[m[32m        app:layout_constraintEnd_toEndOf="parent"[m
[32m+[m[32m        app:layout_constraintHorizontal_bias="0.879"[m
[32m+[m[32m        app:layout_constraintStart_toStartOf="parent"[m
[32m+[m[32m        app:layout_constraintTop_toTopOf="parent"[m
[32m+[m[32m        app:layout_constraintVertical_bias="0.729" />[m
[32m+[m
[32m+[m[32m    <ImageView[m
[32m+[m[32m        android:id="@+id/pick_flag"[m
[32m+[m[32m        android:layout_width="200dp"[m
[32m+[m[32m        android:layout_height="150dp"[m
[32m+[m[32m        app:layout_constraintBottom_toBottomOf="parent"[m
[32m+[m[32m        app:layout_constraintEnd_toEndOf="parent"[m
[32m+[m[32m        app:layout_constraintStart_toStartOf="parent"[m
[32m+[m[32m        app:layout_constraintTop_toTopOf="parent"[m
[32m+[m[32m        app:layout_constraintVertical_bias="0.433" />[m
[32m+[m
[32m+[m[32m    <TextView[m
[32m+[m[32m        android:id="@+id/time_txt"[m
[32m+[m[32m        android:layout_width="114dp"[m
[32m+[m[32m        android:layout_height="51dp"[m
[32m+[m[32m        android:textColor="#0B0A0A"[m
[32m+[m[32m        android:textSize="34sp"[m
[32m+[m[32m        android:textStyle="bold"[m
[32m+[m[32m        app:layout_constraintBottom_toBottomOf="parent"[m
[32m+[m[32m        app:layout_constraintEnd_toEndOf="parent"[m
[32m+[m[32m        app:layout_constraintHorizontal_bias="0.151"[m
[32m+[m[32m        app:layout_constraintStart_toStartOf="parent"[m
[32m+[m[32m        app:layout_constraintTop_toTopOf="parent"[m
[32m+[m[32m        app:layout_constraintVertical_bias="0.076" />[m
[32m+[m
[32m+[m[32m    <TextView[m
[32m+[m[32m        android:id="@+id/timeLeft"[m
[32m+[m[32m        android:layout_width="145dp"[m
[32m+[m[32m        android:layout_height="39dp"[m
[32m+[m[32m        android:text="@string/timeLeft.txt"[m
[32m+[m[32m        android:textColor="#0B0A0A"[m
[32m+[m[32m        android:textSize="20sp"[m
[32m+[m[32m        android:textStyle="bold"[m
[32m+[m[32m        app:layout_constraintBottom_toBottomOf="parent"[m
[32m+[m[32m        app:layout_constraintEnd_toEndOf="parent"[m
[32m+[m[32m        app:layout_constraintHorizontal_bias="0.05"[m
[32m+[m[32m        app:layout_constraintStart_toStartOf="parent"[m
[32m+[m[32m        app:layout_constraintTop_toTopOf="parent"[m
[32m+[m[32m        app:layout_constraintVertical_bias="0.007" />[m
[32m+[m
[32m+[m
[32m+[m[32m    <TextView[m
[32m+[m[32m        android:id="@+id/currentAnswers"[m
[32m+[m[32m        android:layout_width="200dp"[m
[32m+[m[32m        android:layout_height="75dp"[m
[32m+[m[32m        android:gravity="center"[m
[32m+[m[32m        android:textColor="#0B0A0A"[m
[32m+[m[32m        android:textSize="34sp"[m
[32m+[m[32m        android:textStyle="bold"[m
[32m+[m[32m        app:layout_constraintBottom_toBottomOf="parent"[m
[32m+[m[32m        app:layout_constraintEnd_toEndOf="parent"[m
[32m+[m[32m        app:layout_constraintHorizontal_bias="0.497"[m
[32m+[m[32m        app:layout_constraintStart_toStartOf="parent"[m
[32m+[m[32m        app:layout_constraintTop_toTopOf="parent"[m
[32m+[m[32m        app:layout_constraintVertical_bias="0.191" />[m
[32m+[m
[32m+[m[32m    <ImageView[m
[32m+[m[32m        android:id="@+id/heart_3"[m
[32m+[m[32m        android:layout_width="45dp"[m
[32m+[m[32m        android:layout_height="43dp"[m
[32m+[m[32m        android:layout_marginEnd="17dp"[m
[32m+[m[32m        app:layout_constraintBottom_toBottomOf="parent"[m
[32m+[m[32m        app:layout_constraintEnd_toEndOf="parent"[m
[32m+[m[32m        app:layout_constraintHorizontal_bias="1.0"[m
[32m+[m[32m        app:layout_constraintStart_toStartOf="parent"[m
[32m+[m[32m        app:layout_constraintTop_toTopOf="parent"[m
[32m+[m[32m        app:layout_constraintVertical_bias="0.037"[m
[32m+[m[32m        app:srcCompat="@drawable/heart" />[m
[32m+[m
[32m+[m[32m    <ImageView[m
[32m+[m[32m        android:id="@+id/heart_2"[m
[32m+[m[32m        android:layout_width="wrap_content"[m
[32m+[m[32m        android:layout_height="wrap_content"[m
[32m+[m[32m        app:layout_constraintBottom_toBottomOf="parent"[m
[32m+[m[32m        app:layout_constraintEnd_toStartOf="@+id/heart_3"[m
[32m+[m[32m        app:layout_constraintStart_toEndOf="@+id/heart_1"[m
[32m+[m[32m        app:layout_constraintTop_toTopOf="parent"[m
[32m+[m[32m        app:layout_constraintVertical_bias="0.036"[m
[32m+[m[32m        app:srcCompat="@drawable/heart" />[m
[32m+[m
[32m+[m[32m    <ImageView[m
[32m+[m[32m        android:id="@+id/heart_1"[m
[32m+[m[32m        android:layout_width="52dp"[m
[32m+[m[32m        android:layout_height="46dp"[m
[32m+[m[32m        android:layout_marginStart="8dp"[m
[32m+[m[32m        android:scrollbarSize="4dp"[m
[32m+[m[32m        app:layout_constraintBottom_toTopOf="@+id/btn_answer2"[m
[32m+[m[32m        app:layout_constraintEnd_toEndOf="parent"[m
[32m+[m[32m        app:layout_constraintHorizontal_bias="0.623"[m
[32m+[m[32m        app:layout_constraintStart_toStartOf="parent"[m
[32m+[m[32m        app:layout_constraintTop_toTopOf="parent"[m
[32m+[m[32m        app:layout_constraintVertical_bias="0.056"[m
[32m+[m[32m        app:srcCompat="@drawable/heart" />[m
[32m+[m
[32m+[m
[32m+[m[32m</androidx.constraintlayout.widget.ConstraintLayout>[m
\ No newline at end of file[m
[1mdiff --git a/app/src/main/res/layout/listitem.xml b/app/src/main/res/layout/listitem.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..083b945[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/res/layout/listitem.xml[m
[36m@@ -0,0 +1,10 @@[m
[32m+[m[32m<?xml version="1.0" encoding="utf-8"?>[m
[32m+[m[32m<TextView xmlns:android="http://schemas.android.com/apk/res/android"[m
[32m+[m[32m    android:layout_width="match_parent"[m
[32m+[m[32m    android:layout_height="50dp"[m
[32m+[m[32m    android:gravity="center"[m
[32m+[m[32m    android:textColor="@color/black"[m
[32m+[m[32m    android:textSize="20sp">[m
[32m+[m
[32m+[m
[32m+[m[32m</TextView>[m
\ No newline at end of file[m
[1mdiff --git a/app/src/main/res/layout/loginform.xml b/app/src/main/res/layout/loginform.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..8457098[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/res/layout/loginform.xml[m
[36m@@ -0,0 +1,139 @@[m
[32m+[m[32m<?xml version="1.0" encoding="utf-8"?>[m
[32m+[m[32m<androidx.cardview.widget.CardView xmlns:android="http://schemas.android.com/apk/res/android"[m
[32m+[m[32m    android:layout_width="match_parent"[m
[32m+[m[32m    android:layout_height="wrap_content"[m
[32m+[m[32m    xmlns:app="http://schemas.android.com/apk/res-auto"[m
[32m+[m[32m    xmlns:tools="http://schemas.android.com/tools">[m
[32m+[m
[32m+[m[32m    <androidx.constraintlayout.widget.ConstraintLayout[m
[32m+[m[32m        android:id="@+id/remember_checkbox"[m
[32m+[m[32m        android:layout_width="match_parent"[m
[32m+[m[32m        android:layout_height="495dp"[m
[32m+[m[32m        android:gravity="center"[m
[32m+[m[32m        android:orientation="vertical">[m
[32m+[m
[32m+[m
[32m+[m[32m        <EditText[m
[32m+[m[32m            android:id="@+id/mail_txt"[m
[32m+[m[32m            android:layout_width="wrap_content"[m
[32m+[m[32m            android:layout_height="wrap_content"[m
[32m+[m[32m            android:ems="10"[m
[32m+[m
[32m+[m[32m            android:gravity="center"[m
[32m+[m[32m            android:hint="@string/email_txt"[m
[32m+[m[32m            android:inputType="textEmailAddress"[m
[32m+[m[32m            android:minHeight="48dp"[m
[32m+[m[32m            app:layout_constraintBottom_toTopOf="@+id/pass_txt"[m
[32m+[m[32m            app:layout_constraintEnd_toEndOf="parent"[m
[32m+[m[32m            app:layout_constraintHorizontal_bias="0.497"[m
[32m+[m[32m            app:layout_constraintStart_toStartOf="parent"[m
[32m+[m[32m            app:layout_constraintTop_toTopOf="parent"[m
[32m+[m[32m            app:layout_constraintVertical_bias="1.0" />[m
[32m+[m
[32m+[m[32m        <EditText[m
[32m+[m[32m            android:id="@+id/pass_txt"[m
[32m+[m[32m            android:layout_width="wrap_content"[m
[32m+[m[32m            android:layout_height="wrap_content"[m
[32m+[m[32m            android:ems="10"[m
[32m+[m[32m            android:gravity="center"[m
[32m+[m[32m            android:hint="@string/password_txt"[m
[32m+[m[32m            android:inputType="textPassword"[m
[32m+[m[32m            android:minHeight="48dp"[m
[32m+[m[32m            app:layout_constraintBottom_toBottomOf="parent"[m
[32m+[m[32m            app:layout_constraintEnd_toEndOf="parent"[m
[32m+[m[32m            app:layout_constraintHorizontal_bias="0.497"[m
[32m+[m[32m            app:layout_constraintStart_toStartOf="parent"[m
[32m+[m[32m            app:layout_constraintTop_toTopOf="parent"[m
[32m+[m[32m            app:layout_constraintVertical_bias="0.143" />[m
[32m+[m
[32m+[m[32m        <android.widget.Button[m
[32m+[m[32m            android:id="@+id/btnlogin"[m
[32m+[m[32m            android:layout_width="wrap_content"[m
[32m+[m[32m            android:layout_height="wrap_content"[m
[32m+[m[32m            android:background="@drawable/botton_shape"[m
[32m+[m[32m            android:text="@string/Login_btn_txt"[m
[32m+[m[32m            android:textAllCaps="false"[m
[32m+[m[32m            android:textColor="@color/colorWhite"[m
[32m+[m[32m            app:layout_constraintBottom_toBottomOf="parent"[m
[32m+[m[32m            app:layout_constraintEnd_toEndOf="parent"[m
[32m+[m[32m            app:layout_constraintHorizontal_bias="0.498"[m
[32m+[m[32m            app:layout_constraintStart_toStartOf="parent"[m
[32m+[m[32m            app:layout_constraintTop_toTopOf="parent"[m
[32m+[m[32m            app:layout_constraintVertical_bias="0.27" />[m
[32m+[m
[32m+[m[32m        <android.widget.Button[m
[32m+[m[32m            android:id="@+id/create_account_btn"[m
[32m+[m[32m            android:layout_width="215dp"[m
[32m+[m[32m            android:layout_height="wrap_content"[m
[32m+[m[32m            android:layout_gravity="center"[m
[32m+[m[32m            android:background="@drawable/create_account_btn"[m
[32m+[m[32m            android:text="@string/create_Account"[m
[32m+[m[32m            android:textAllCaps="false"[m
[32m+[m[32m            android:textColor="@color/red"[m
[32m+[m[32m            android:textSize="20sp"[m
[32m+[m[32m            android:textStyle="bold"[m
[32m+[m[32m            app:layout_constraintBottom_toBottomOf="parent"[m
[32m+[m[32m            app:layout_constraintEnd_toEndOf="parent"[m
[32m+[m[32m            app:layout_constraintHorizontal_bias="0.576"[m
[32m+[m[32m            app:layout_constraintStart_toStartOf="parent"[m
[32m+[m[32m            app:layout_constraintTop_toTopOf="parent"[m
[32m+[m[32m            app:layout_constraintVertical_bias="0.485" />[m
[32m+[m
[32m+[m[32m        <CheckBox[m
[32m+[m[32m            android:id="@+id/checkBoxRememberMe"[m
[32m+[m[32m            android:layout_width="141dp"[m
[32m+[m[32m            android:layout_height="wrap_content"[m
[32m+[m[32m            android:background="@drawable/create_account_btn"[m
[32m+[m[32m            android:gravity="center"[m
[32m+[m[32m            android:text="@string/rememberMe_txt"[m
[32m+[m[32m            android:textColor="@color/red"[m
[32m+[m[32m            android:textSize="15sp"[m
[32m+[m[32m            android:textStyle="bold"[m
[32m+[m[32m            app:layout_constraintBottom_toBottomOf="parent"[m
[32m+[m[32m            app:layout_constraintEnd_toEndOf="parent"[m
[32m+[m[32m            app:layout_constraintStart_toStartOf="parent"[m
[32m+[m[32m            app:layout_constraintTop_toTopOf="parent"[m
[32m+[m[32m            app:layout_constraintVertical_bias="0.378" />[m
[32m+[m
[32m+[m[32m        <RadioGroup[m
[32m+[m[32m            android:id="@+id/radioGroup"[m
[32m+[m[32m            android:layout_width="141dp"[m
[32m+[m[32m            android:layout_height="63dp"[m
[32m+[m[32m            android:orientation="horizontal"[m
[32m+[m[32m            app:layout_constraintBottom_toBottomOf="parent"[m
[32m+[m[32m            app:layout_constraintEnd_toEndOf="parent"[m
[32m+[m[32m            app:layout_constraintHorizontal_bias="0.548"[m
[32m+[m[32m            app:layout_constraintStart_toStartOf="parent"[m
[32m+[m[32m            app:layout_constraintTop_toTopOf="parent"[m
[32m+[m[32m            app:layout_constraintVertical_bias="0.613"[m
[32m+[m[32m            tools:ignore="MissingConstraints">[m
[32m+[m
[32m+[m[32m            <RadioButton[m
[32m+[m[32m                android:id="@+id/radio_hebrew"[m
[32m+[m[32m                android:layout_width="60dp"[m
[32m+[m[32m                android:layout_height="60dp"[m
[32m+[m[32m                android:background="@drawable/botton_shape"[m
[32m+[m[32m                android:gravity="center"[m
[32m+[m[32m                android:minHeight="48dp"[m
[32m+[m[32m                android:text="@string/hebrew_rd_txt"[m
[32m+[m[32m                app:layout_constraintBottom_toBottomOf="parent"[m
[32m+[m[32m                app:layout_constraintEnd_toEndOf="parent"[m
[32m+[m[32m                app:layout_constraintHorizontal_bias="0.317"[m
[32m+[m[32m                app:layout_constraintStart_toStartOf="parent"[m
[32m+[m[32m                app:layout_constraintTop_toTopOf="parent"[m
[32m+[m[32m                app:layout_constraintVertical_bias="0.499" />[m
[32m+[m
[32m+[m[32m            <RadioButton[m
[32m+[m[32m                android:id="@+id/radio_english"[m
[32m+[m[32m                android:layout_width="60dp"[m
[32m+[m[32m                android:layout_height="60dp"[m
[32m+[m[32m                android:background="@drawable/botton_shape"[m
[32m+[m[32m                android:checked="true"[m
[32m+[m[32m                android:gravity="center"[m
[32m+[m[32m                android:text="@string/english_rd_txt" />[m
[32m+[m
[32m+[m[32m        </RadioGroup>[m
[32m+[m
[32m+[m
[32m+[m[32m    </androidx.constraintlayout.widget.ConstraintLayout>[m
[32m+[m[32m</androidx.cardview.widget.CardView>[m
\ No newline at end of file[m
[1mdiff --git a/app/src/main/res/layout/menu.xml b/app/src/main/res/layout/menu.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..173baf4[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/res/layout/menu.xml[m
[36m@@ -0,0 +1,64 @@[m
[32m+[m[32m<?xml version="1.0" encoding="utf-8"?>[m
[32m+[m[32m<RelativeLayout xmlns:android="http://schemas.android.com/apk/res/android"[m
[32m+[m[32m    xmlns:app="http://schemas.android.com/apk/res-auto"[m
[32m+[m[32m    xmlns:tools="http://schemas.android.com/tools"[m
[32m+[m[32m    android:layout_width="match_parent"[m
[32m+[m[32m    android:layout_height="match_parent"[m
[32m+[m[32m    tools:context=".MainActivity">[m
[32m+[m[32m    <View[m
[32m+[m[32m        android:id="@+id/header_view"[m
[32m+[m[32m        android:layout_width="match_parent"[m
[32m+[m[32m        android:layout_height="120dp"[m
[32m+[m[32m        android:background="@drawable/header_bg">[m
[32m+[m
[32m+[m[32m    </View>[m
[32m+[m
[32m+[m[32m    <TextView[m
[32m+[m[32m        android:layout_width="match_parent"[m
[32m+[m[32m        android:layout_height="wrap_content"[m
[32m+[m[32m        android:layout_marginTop="35dp"[m
[32m+[m[32m        android:gravity="center_horizontal"[m
[32m+[m[32m        android:text="@string/menu_txt"[m
[32m+[m[32m        android:textAlignment="center"[m
[32m+[m[32m        android:textColor="@color/colorWhite"[m
[32m+[m[32m        android:textSize="25sp"[m
[32m+[m[32m        android:textStyle="bold" />[m
[32m+[m[32m    <LinearLayout[m
[32m+[m[32m        android:layout_width="match_parent"[m
[32m+[m[32m        android:layout_height="wrap_content"[m
[32m+[m[32m        android:layout_below="@+id/header_view"[m
[32m+[m[32m        android:orientation="vertical">[m
[32m+[m
[32m+[m[32m        <include[m
[32m+[m[32m            layout="@layout/menulevels"[m
[32m+[m[32m            android:layout_height="400dp"[m
[32m+[m[32m            android:layout_width="match_parent" />[m
[32m+[m
[32m+[m[32m    </LinearLayout>[m
[32m+[m
[32m+[m[32m    <View[m
[32m+[m
[32m+[m[32m        android:layout_width="match_parent"[m
[32m+[m[32m        android:layout_height="120dp"[m
[32m+[m[32m        android:layout_alignParentEnd="true"[m
[32m+[m[32m        android:layout_alignParentBottom="true"[m
[32m+[m[32m        android:layout_marginEnd="0dp"[m
[32m+[m[32m        android:layout_marginBottom="0dp"[m
[32m+[m[32m        android:background="@drawable/bottom_bg" />[m
[32m+[m
[32m+[m[32m    <LinearLayout[m
[32m+[m[32m        android:layout_width="match_parent"[m
[32m+[m[32m        android:layout_height="45dp"[m
[32m+[m[32m        android:layout_alignParentStart="true"[m
[32m+[m[32m        android:layout_alignParentEnd="true"[m
[32m+[m[32m        android:layout_alignParentBottom="true"[m
[32m+[m[32m        android:layout_marginStart="-7dp"[m
[32m+[m[32m        android:layout_marginEnd="7dp"[m
[32m+[m[32m        android:layout_marginBottom="49dp"[m
[32m+[m[32m        android:gravity="bottom">[m
[32m+[m
[32m+[m
[32m+[m[32m    </LinearLayout>[m
[32m+[m
[32m+[m
[32m+[m[32m</RelativeLayout>[m
\ No newline at end of file[m
[1mdiff --git a/app/src/main/res/layout/menulevels.xml b/app/src/main/res/layout/menulevels.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..de2fa13[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/res/layout/menulevels.xml[m
[36m@@ -0,0 +1,137 @@[m
[32m+[m[32m<?xml version="1.0" encoding="utf-8"?>[m
[32m+[m[32m<androidx.constraintlayout.widget.ConstraintLayout xmlns:android="http://schemas.android.com/apk/res/android"[m
[32m+[m[32m    xmlns:app="http://schemas.android.com/apk/res-auto"[m
[32m+[m[32m    xmlns:tools="http://schemas.android.com/tools"[m
[32m+[m[32m    android:layout_width="match_parent"[m
[32m+[m[32m    android:layout_height="match_parent">[m
[32m+[m
[32m+[m[32m    <android.widget.Button[m
[32m+[m[32m        android:id="@+id/level3_btn"[m
[32m+[m[32m        android:layout_width="wrap_content"[m
[32m+[m[32m        android:layout_height="wrap_content"[m
[32m+[m[32m        android:background="@drawable/botton_shape"[m
[32m+[m[32m        android:text="@string/Hard_txt"[m
[32m+[m[32m        android:textAllCaps="false"[m
[32m+[m[32m        android:textColor="@color/colorWhite"[m
[32m+[m[32m        app:layout_constraintBottom_toBottomOf="parent"[m
[32m+[m[32m        app:layout_constraintEnd_toEndOf="parent"[m
[32m+[m[32m        app:layout_constraintHorizontal_bias="0.894"[m
[32m+[m[32m        app:layout_constraintStart_toStartOf="parent"[m
[32m+[m[32m        app:layout_constraintTop_toTopOf="parent"[m
[32m+[m[32m        app:layout_constraintVertical_bias="0.309"[m
[32m+[m[32m        tools:ignore="MissingConstraints" />[m
[32m+[m
[32m+[m[32m    <android.widget.Button[m
[32m+[m[32m        android:id="@+id/level1_btn"[m
[32m+[m[32m        android:layout_width="wrap_content"[m
[32m+[m[32m        android:layout_height="wrap_content"[m
[32m+[m[32m        android:background="@drawable/botton_shape"[m
[32m+[m[32m        android:text="@string/Easy_txt"[m
[32m+[m[32m        android:textAllCaps="false"[m
[32m+[m[32m        android:textColor="@color/colorWhite"[m
[32m+[m[32m        app:layout_constraintBottom_toBottomOf="parent"[m
[32m+[m[32m        app:layout_constraintEnd_toEndOf="parent"[m
[32m+[m[32m        app:layout_constraintHorizontal_bias="0.105"[m
[32m+[m[32m        app:layout_constraintStart_toStartOf="parent"[m
[32m+[m[32m        app:layout_constraintTop_toTopOf="parent"[m
[32m+[m[32m        app:layout_constraintVertical_bias="0.311"[m
[32m+[m[32m        tools:ignore="MissingConstraints" />[m
[32m+[m
[32m+[m[32m    <android.widget.Button[m
[32m+[m[32m        android:id="@+id/level2_btn"[m
[32m+[m[32m        android:layout_width="wrap_content"[m
[32m+[m[32m        android:layout_height="wrap_content"[m
[32m+[m[32m        android:background="@drawable/botton_shape"[m
[32m+[m[32m        android:text="@string/Medium_txt"[m
[32m+[m[32m        android:textAllCaps="false"[m
[32m+[m[32m        android:textColor="@color/colorWhite"[m
[32m+[m[32m        app:layout_constraintBottom_toBottomOf="parent"[m
[32m+[m[32m        app:layout_constraintEnd_toEndOf="parent"[m
[32m+[m[32m        app:layout_constraintHorizontal_bias="0.495"[m
[32m+[m[32m        app:layout_constraintStart_toStartOf="parent"[m
[32m+[m[32m        app:layout_constraintTop_toTopOf="parent"[m
[32m+[m[32m        app:layout_constraintVertical_bias="0.309"[m
[32m+[m[32m        tools:ignore="MissingConstraints" />[m
[32m+[m
[32m+[m
[32m+[m[32m    <android.widget.Button[m
[32m+[m[32m        android:id="@+id/logout_btn"[m
[32m+[m[32m        android:layout_width="wrap_content"[m
[32m+[m[32m        android:layout_height="wrap_content"[m
[32m+[m[32m        android:background="@drawable/botton_shape"[m
[32m+[m[32m        android:text="@string/Logout_btn_txt"[m
[32m+[m[32m        android:textAllCaps="false"[m
[32m+[m[32m        android:textColor="@color/colorWhite"[m
[32m+[m[32m        app:layout_constraintBottom_toBottomOf="parent"[m
[32m+[m[32m        app:layout_constraintEnd_toEndOf="parent"[m
[32m+[m[32m        app:layout_constraintHorizontal_bias="0.337"[m
[32m+[m[32m        app:layout_constraintStart_toStartOf="parent"[m
[32m+[m[32m        app:layout_constraintTop_toTopOf="parent"[m
[32m+[m[32m        app:layout_constraintVertical_bias="0.627"[m
[32m+[m[32m        tools:ignore="MissingConstraints" />[m
[32m+[m
[32m+[m[32m    <android.widget.Button[m
[32m+[m[32m        android:id="@+id/score_btn"[m
[32m+[m[32m        android:layout_width="wrap_content"[m
[32m+[m[32m        android:layout_height="wrap_content"[m
[32m+[m[32m        android:background="@drawable/botton_shape"[m
[32m+[m[32m        android:text="@string/scoreTable_txt"[m
[32m+[m[32m        android:textAllCaps="false"[m
[32m+[m[32m        android:textColor="@color/colorWhite"[m
[32m+[m[32m        app:layout_constraintBottom_toBottomOf="parent"[m
[32m+[m[32m        app:layout_constraintEnd_toEndOf="parent"[m
[32m+[m[32m        app:layout_constraintHorizontal_bias="0.767"[m
[32m+[m[32m        app:layout_constraintStart_toStartOf="parent"[m
[32m+[m[32m        app:layout_constraintTop_toTopOf="parent"[m
[32m+[m[32m        app:layout_constraintVertical_bias="0.627"[m
[32m+[m[32m        tools:ignore="MissingConstraints" />[m
[32m+[m
[32m+[m[32m    <TextView[m
[32m+[m[32m        android:id="@+id/blessing"[m
[32m+[m[32m        android:layout_width="77dp"[m
[32m+[m[32m        android:layout_height="57dp"[m
[32m+[m[32m        android:gravity="center"[m
[32m+[m[32m        android:text="@string/blessing.txt"[m
[32m+[m[32m        android:textColor="#1B1919"[m
[32m+[m[32m        android:textSize="24dp"[m
[32m+[m[32m        android:textStyle="bold"[m
[32m+[m[32m        app:layout_constraintBottom_toBottomOf="parent"[m
[32m+[m[32m        app:layout_constraintEnd_toEndOf="parent"[m
[32m+[m[32m        app:layout_constraintHorizontal_bias="0.395"[m
[32m+[m[32m        app:layout_constraintStart_toStartOf="parent"[m
[32m+[m[32m        app:layout_constraintTop_toTopOf="parent"[m
[32m+[m[32m        app:layout_constraintVertical_bias="0.086"[m
[32m+[m[32m        tools:ignore="MissingConstraints" />[m
[32m+[m
[32m+[m[32m    <TextView[m
[32m+[m[32m        android:id="@+id/user"[m
[32m+[m[32m        android:layout_width="77dp"[m
[32m+[m[32m        android:layout_height="57dp"[m
[32m+[m[32m        android:gravity="center|left"[m
[32m+[m[32m        android:textColor="#1B1919"[m
[32m+[m[32m        android:textSize="24dp"[m
[32m+[m[32m        android:textStyle="bold"[m
[32m+[m[32m        app:layout_constraintBottom_toBottomOf="parent"[m
[32m+[m[32m        app:layout_constraintEnd_toEndOf="parent"[m
[32m+[m[32m        app:layout_constraintHorizontal_bias="0.0"[m
[32m+[m[32m        app:layout_constraintStart_toEndOf="@+id/blessing"[m
[32m+[m[32m        app:layout_constraintTop_toTopOf="parent"[m
[32m+[m[32m        app:layout_constraintVertical_bias="0.086"[m
[32m+[m[32m        tools:ignore="MissingConstraints" />[m
[32m+[m
[32m+[m[32m    <Switch[m
[32m+[m[32m        android:id="@+id/switch_music"[m
[32m+[m[32m        android:layout_width="100dp"[m
[32m+[m[32m        android:layout_height="36dp"[m
[32m+[m[32m        android:background="@drawable/switch_shape"[m
[32m+[m[32m        android:gravity="center"[m
[32m+[m[32m        android:text="@string/music_txt"[m
[32m+[m[32m        app:layout_constraintBottom_toBottomOf="parent"[m
[32m+[m[32m        app:layout_constraintEnd_toEndOf="parent"[m
[32m+[m[32m        app:layout_constraintHorizontal_bias="0.543"[m
[32m+[m[32m        app:layout_constraintStart_toStartOf="parent"[m
[32m+[m[32m        app:layout_constraintTop_toTopOf="parent"[m
[32m+[m[32m        app:layout_constraintVertical_bias="0.463"[m
[32m+[m[32m        tools:ignore="UseSwitchCompatOrMaterialXml" />[m
[32m+[m
[32m+[m[32m</androidx.constraintlayout.widget.ConstraintLayout>[m
\ No newline at end of file[m
[1mdiff --git a/app/src/main/res/layout/register.xml b/app/src/main/res/layout/register.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..3affa59[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/res/layout/register.xml[m
[36m@@ -0,0 +1,55 @@[m
[32m+[m[32m<?xml version="1.0" encoding="utf-8"?>[m
[32m+[m[32m<RelativeLayout xmlns:android="http://schemas.android.com/apk/res/android"[m
[32m+[m[32m    xmlns:app="http://schemas.android.com/apk/res-auto"[m
[32m+[m[32m    xmlns:tools="http://schemas.android.com/tools"[m
[32m+[m[32m    android:layout_width="match_parent"[m
[32m+[m[32m    android:layout_height="match_parent"[m
[32m+[m[32m    tools:context=".MainActivity">[m
[32m+[m
[32m+[m[32m    <View[m
[32m+[m[32m        android:id="@+id/header_view"[m
[32m+[m[32m        android:layout_width="match_parent"[m
[32m+[m[32m        android:layout_height="120dp"[m
[32m+[m[32m        android:background="@drawable/header_bg">[m
[32m+[m
[32m+[m[32m    </View>[m
[32m+[m[32m    <TextView[m
[32m+[m[32m        android:layout_marginTop="35dp"[m
[32m+[m[32m        android:textColor="@color/colorWhite"[m
[32m+[m[32m        android:textSize="25sp"[m
[32m+[m[32m        android:textAlignment="center"[m
[32m+[m[32m        android:text="@string/registerPage_txt"[m
[32m+[m[32m        android:textStyle="bold"[m
[32m+[m[32m        android:layout_width="match_parent"[m
[32m+[m[32m        android:layout_height="wrap_content"[m
[32m+[m[32m        android:gravity="center_horizontal" />[m
[32m+[m[32m    <LinearLayout[m
[32m+[m[32m        android:layout_width="match_parent"[m
[32m+[m[32m        android:layout_height="wrap_content"[m
[32m+[m[32m        android:layout_below="@+id/header_view"[m
[32m+[m[32m        android:orientation="vertical">[m
[32m+[m
[32m+[m[32m        <include layout="@layout/registerform" />[m
[32m+[m
[32m+[m[32m        <LinearLayout[m
[32m+[m[32m            android:layout_width="match_parent"[m
[32m+[m[32m            android:layout_height="match_parent"[m
[32m+[m[32m            android:gravity="bottom">[m
[32m+[m
[32m+[m
[32m+[m[32m        </LinearLayout>[m
[32m+[m
[32m+[m[32m    </LinearLayout>[m
[32m+[m
[32m+[m[32m    <View[m
[32m+[m
[32m+[m[32m        android:layout_width="match_parent"[m
[32m+[m[32m        android:layout_height="120dp"[m
[32m+[m[32m        android:layout_alignParentEnd="true"[m
[32m+[m[32m        android:layout_alignParentBottom="true"[m
[32m+[m[32m        android:layout_marginEnd="0dp"[m
[32m+[m[32m        android:layout_marginBottom="0dp"[m
[32m+[m[32m        android:background="@drawable/bottom_bg" />[m
[32m+[m
[32m+[m
[32m+[m[32m</RelativeLayout>[m
\ No newline at end of file[m
[1mdiff --git a/app/src/main/res/layout/registerform.xml b/app/src/main/res/layout/registerform.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..8f45193[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/res/layout/registerform.xml[m
[36m@@ -0,0 +1,54 @@[m
[32m+[m[32m<?xml version="1.0" encoding="utf-8"?>[m
[32m+[m[32m<androidx.cardview.widget.CardView xmlns:android="http://schemas.android.com/apk/res/android"[m
[32m+[m[32m    android:layout_width="match_parent"[m
[32m+[m[32m    android:layout_height="wrap_content">[m
[32m+[m
[32m+[m[32m    <LinearLayout[m
[32m+[m[32m        android:layout_width="match_parent"[m
[32m+[m[32m        android:layout_height="300dp"[m
[32m+[m[32m        android:gravity="center"[m
[32m+[m[32m        android:orientation="vertical">[m
[32m+[m
[32m+[m
[32m+[m[32m        <EditText[m
[32m+[m[32m            android:id="@+id/userName"[m
[32m+[m[32m            android:layout_width="wrap_content"[m
[32m+[m[32m            android:layout_height="wrap_content"[m
[32m+[m[32m            android:ems="10"[m
[32m+[m[32m            android:gravity="center"[m
[32m+[m[32m            android:hint="@string/user_txt" />[m
[32m+[m
[32m+[m[32m        <EditText[m
[32m+[m[32m            android:id="@+id/email"[m
[32m+[m[32m            android:layout_width="wrap_content"[m
[32m+[m[32m            android:layout_height="wrap_content"[m
[32m+[m[32m            android:ems="10"[m
[32m+[m[32m            android:gravity="center"[m
[32m+[m
[32m+[m[32m            android:hint="@string/email_txt"[m
[32m+[m[32m            android:inputType="textEmailAddress" />[m
[32m+[m
[32m+[m[32m        <EditText[m
[32m+[m[32m            android:id="@+id/mypass"[m
[32m+[m[32m            android:layout_width="wrap_content"[m
[32m+[m[32m            android:layout_height="wrap_content"[m
[32m+[m[32m            android:ems="10"[m
[32m+[m[32m            android:gravity="center"[m
[32m+[m[32m            android:hint="@string/password_txt"[m
[32m+[m[32m            android:inputType="textPassword" />[m
[32m+[m
[32m+[m[32m        <android.widget.Button[m
[32m+[m[32m            android:id="@+id/btn_register"[m
[32m+[m[32m            android:layout_width="wrap_content"[m
[32m+[m[32m            android:layout_height="wrap_content"[m
[32m+[m[32m            android:layout_marginTop="10dp"[m
[32m+[m[32m            android:background="@drawable/botton_shape"[m
[32m+[m[32m            android:text="@string/register_txt"[m
[32m+[m[32m            android:textAllCaps="false"[m
[32m+[m[32m            android:textColor="@color/colorWhite" />[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32m    </LinearLayout>[m
[32m+[m
[32m+[m[32m</androidx.cardview.widget.CardView>[m
\ No newline at end of file[m
[1mdiff --git a/app/src/main/res/layout/scorelist.xml b/app/src/main/res/layout/scorelist.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..cd0a7c6[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/res/layout/scorelist.xml[m
[36m@@ -0,0 +1,50 @@[m
[32m+[m[32m<?xml version="1.0" encoding="utf-8"?>[m
[32m+[m[32m<RelativeLayout[m
[32m+[m[32m    xmlns:android="http://schemas.android.com/apk/res/android"[m
[32m+[m[32m    xmlns:app="http://schemas.android.com/apk/res-auto"[m
[32m+[m[32m    xmlns:tools="http://schemas.android.com/tools"[m
[32m+[m[32m    android:id="@+id/activity_main"[m
[32m+[m[32m    android:layout_width="match_parent"[m
[32m+[m[32m    android:layout_height="match_parent"[m
[32m+[m[32m    android:background="@drawable/gamebackgroung">[m
[32m+[m
[32m+[m
[32m+[m[32m    <ListView[m
[32m+[m[32m        android:id="@+id/theList"[m
[32m+[m[32m        android:layout_width="match_parent"[m
[32m+[m[32m        android:layout_height="459dp"[m
[32m+[m[32m        android:layout_alignParentStart="true"[m
[32m+[m[32m        android:layout_alignParentTop="true"[m
[32m+[m[32m        android:layout_marginStart="0dp"[m
[32m+[m[32m        android:layout_marginTop="144dp" />[m
[32m+[m
[32m+[m[32m    <TextView[m
[32m+[m[32m        android:id="@+id/score_title"[m
[32m+[m[32m        android:layout_width="match_parent"[m
[32m+[m[32m        android:layout_height="89dp"[m
[32m+[m[32m        android:text="@string/score_title"[m
[32m+[m[32m        android:layout_alignParentStart="true"[m
[32m+[m[32m        android:layout_alignParentTop="true"[m
[32m+[m[32m        android:layout_marginStart="-2dp"[m
[32m+[m[32m        android:layout_marginTop="55dp"[m
[32m+[m[32m        android:gravity="center"[m
[32m+[m[32m        android:textColor="#0B0A0A"[m
[32m+[m[32m        android:textSize="20sp" />[m
[32m+[m
[32m+[m
[32m+[m[32m    <android.widget.Button[m
[32m+[m[32m        android:id="@+id/btn_score_to_menu"[m
[32m+[m[32m        android:layout_width="wrap_content"[m
[32m+[m[32m        android:layout_height="wrap_content"[m
[32m+[m[32m        android:layout_alignParentStart="true"[m
[32m+[m[32m        android:layout_alignParentTop="true"[m
[32m+[m[32m        android:layout_alignParentEnd="true"[m
[32m+[m[32m        android:layout_marginStart="2dp"[m
[32m+[m[32m        android:layout_marginTop="5dp"[m
[32m+[m[32m        android:layout_marginEnd="321dp"[m
[32m+[m[32m        android:background="@drawable/botton_shape"[m
[32m+[m[32m        android:text="@string/tomenu_txt"[m
[32m+[m[32m        android:textColor="#090909"[m
[32m+[m[32m        android:textStyle="bold" />[m
[32m+[m
[32m+[m[32m</RelativeLayout>[m
\ No newline at end of file[m
[1mdiff --git a/app/src/main/res/layout/summary_screen.xml b/app/src/main/res/layout/summary_screen.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..a030842[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/res/layout/summary_screen.xml[m
[36m@@ -0,0 +1,157 @@[m
[32m+[m[32m<?xml version="1.0" encoding="utf-8"?>[m
[32m+[m[32m<androidx.constraintlayout.widget.ConstraintLayout xmlns:android="http://schemas.android.com/apk/res/android"[m
[32m+[m[32m    xmlns:tools="http://schemas.android.com/tools"[m
[32m+[m[32m    android:layout_width="match_parent"[m
[32m+[m[32m    android:layout_height="match_parent"[m
[32m+[m[32m    xmlns:app="http://schemas.android.com/apk/res-auto"[m
[32m+[m[32m    android:background="@drawable/gamebackgroung">[m
[32m+[m
[32m+[m
[32m+[m[32m    <com.airbnb.lottie.LottieAnimationView[m
[32m+[m[32m        android:id="@+id/animation_txt"[m
[32m+[m[32m        android:layout_width="403dp"[m
[32m+[m[32m        android:layout_height="227dp"[m
[32m+[m[32m        app:layout_constraintBottom_toBottomOf="parent"[m
[32m+[m[32m        app:layout_constraintEnd_toEndOf="parent"[m
[32m+[m[32m        app:layout_constraintHorizontal_bias="0.0"[m
[32m+[m[32m        app:layout_constraintStart_toStartOf="parent"[m
[32m+[m[32m        app:layout_constraintTop_toTopOf="parent"[m
[32m+[m[32m        app:layout_constraintVertical_bias="0.132"[m
[32m+[m[32m        app:lottie_autoPlay="true"[m
[32m+[m[32m        tools:ignore="MissingConstraints" />[m
[32m+[m
[32m+[m
[32m+[m[32m    <TextView[m
[32m+[m[32m        android:id="@+id/summery_name"[m
[32m+[m[32m        android:layout_width="78dp"[m
[32m+[m[32m        android:layout_height="65dp"[m
[32m+[m[32m        android:height="20dp"[m
[32m+[m[32m        android:gravity="center"[m
[32m+[m[32m        android:text="@string/name"[m
[32m+[m[32m        android:textSize="24sp"[m
[32m+[m[32m        app:layout_constraintBottom_toTopOf="@+id/to_menu_btn"[m
[32m+[m[32m        app:layout_constraintEnd_toEndOf="parent"[m
[32m+[m[32m        app:layout_constraintHorizontal_bias="0.354"[m
[32m+[m[32m        app:layout_constraintStart_toStartOf="parent"[m
[32m+[m[32m        app:layout_constraintTop_toBottomOf="@+id/animation_txt"[m
[32m+[m[32m        app:layout_constraintVertical_bias="0.136"[m
[32m+[m[32m        tools:ignore="MissingConstraints" />[m
[32m+[m
[32m+[m[32m    <TextView[m
[32m+[m[32m        android:id="@+id/summery_name_result"[m
[32m+[m[32m        android:layout_width="78dp"[m
[32m+[m[32m        android:layout_height="65dp"[m
[32m+[m[32m        android:height="20dp"[m
[32m+[m[32m        android:gravity="center"[m
[32m+[m[32m        android:textSize="24sp"[m
[32m+[m[32m        app:layout_constraintBottom_toTopOf="@+id/to_menu_btn"[m
[32m+[m[32m        app:layout_constraintEnd_toEndOf="parent"[m
[32m+[m[32m        app:layout_constraintHorizontal_bias="0.591"[m
[32m+[m[32m        app:layout_constraintStart_toStartOf="parent"[m
[32m+[m[32m        app:layout_constraintTop_toBottomOf="@+id/animation_txt"[m
[32m+[m[32m        app:layout_constraintVertical_bias="0.136"[m
[32m+[m[32m        tools:ignore="MissingConstraints" />[m
[32m+[m
[32m+[m[32m    <TextView[m
[32m+[m[32m        android:id="@+id/summery_level"[m
[32m+[m[32m        android:layout_width="78dp"[m
[32m+[m[32m        android:layout_height="65dp"[m
[32m+[m[32m        android:gravity="center"[m
[32m+[m[32m        android:text="@string/level"[m
[32m+[m[32m        android:textSize="24sp"[m
[32m+[m[32m        app:layout_constraintBottom_toTopOf="@+id/to_menu_btn"[m
[32m+[m[32m        app:layout_constraintEnd_toEndOf="parent"[m
[32m+[m[32m        app:layout_constraintHorizontal_bias="0.354"[m
[32m+[m[32m        app:layout_constraintStart_toStartOf="parent"[m
[32m+[m[32m        app:layout_constraintTop_toBottomOf="@+id/animation_txt"[m
[32m+[m[32m        app:layout_constraintVertical_bias="0.441"[m
[32m+[m[32m        tools:ignore="MissingConstraints" />[m
[32m+[m
[32m+[m[32m    <TextView[m
[32m+[m[32m        android:id="@+id/summery_level_result"[m
[32m+[m[32m        android:layout_width="78dp"[m
[32m+[m[32m        android:layout_height="65dp"[m
[32m+[m[32m        android:gravity="center"[m
[32m+[m[32m        android:textSize="24sp"[m
[32m+[m[32m        app:layout_constraintBottom_toTopOf="@+id/to_menu_btn"[m
[32m+[m[32m        app:layout_constraintEnd_toEndOf="parent"[m
[32m+[m[32m        app:layout_constraintHorizontal_bias="0.591"[m
[32m+[m[32m        app:layout_constraintStart_toStartOf="parent"[m
[32m+[m[32m        app:layout_constraintTop_toBottomOf="@+id/animation_txt"[m
[32m+[m[32m        app:layout_constraintVertical_bias="0.441"[m
[32m+[m[32m        tools:ignore="MissingConstraints" />[m
[32m+[m
[32m+[m[32m    <TextView[m
[32m+[m[32m        android:id="@+id/summery_score"[m
[32m+[m[32m        android:layout_width="78dp"[m
[32m+[m[32m        android:layout_height="58dp"[m
[32m+[m[32m        android:gravity="center"[m
[32m+[m[32m        android:text="@string/score"[m
[32m+[m[32m        android:textSize="24sp"[m
[32m+[m[32m        app:layout_constraintBottom_toTopOf="@+id/to_menu_btn"[m
[32m+[m[32m        app:layout_constraintEnd_toEndOf="parent"[m
[32m+[m[32m        app:layout_constraintHorizontal_bias="0.354"[m
[32m+[m[32m        app:layout_constraintStart_toStartOf="parent"[m
[32m+[m[32m        app:layout_constraintTop_toBottomOf="@+id/animation_txt"[m
[32m+[m[32m        app:layout_constraintVertical_bias="0.722"[m
[32m+[m[32m        tools:ignore="MissingConstraints" />[m
[32m+[m
[32m+[m
[32m+[m[32m    <TextView[m
[32m+[m[32m        android:id="@+id/summery_score_result"[m
[32m+[m[32m        android:layout_width="78dp"[m
[32m+[m[32m        android:layout_height="58dp"[m
[32m+[m[32m        android:gravity="center"[m
[32m+[m[32m        android:textSize="24sp"[m
[32m+[m[32m        app:layout_constraintBottom_toTopOf="@+id/to_menu_btn"[m
[32m+[m[32m        app:layout_constraintEnd_toEndOf="parent"[m
[32m+[m[32m        app:layout_constraintHorizontal_bias="0.588"[m
[32m+[m[32m        app:layout_constraintStart_toStartOf="parent"[m
[32m+[m[32m        app:layout_constraintTop_toBottomOf="@+id/animation_txt"[m
[32m+[m[32m        app:layout_constraintVertical_bias="0.722"[m
[32m+[m[32m        tools:ignore="MissingConstraints" />[m
[32m+[m
[32m+[m[32m    <TextView[m
[32m+[m[32m        android:id="@+id/summery_time"[m
[32m+[m[32m        android:layout_width="79dp"[m
[32m+[m[32m        android:layout_height="56dp"[m
[32m+[m[32m        android:gravity="center"[m
[32m+[m[32m        android:text="@string/time"[m
[32m+[m[32m        android:textSize="24sp"[m
[32m+[m[32m        app:layout_constraintBottom_toTopOf="@+id/to_menu_btn"[m
[32m+[m[32m        app:layout_constraintEnd_toEndOf="parent"[m
[32m+[m[32m        app:layout_constraintHorizontal_bias="0.355"[m
[32m+[m[32m        app:layout_constraintStart_toStartOf="parent"[m
[32m+[m[32m        app:layout_constraintTop_toBottomOf="@+id/animation_txt"[m
[32m+[m[32m        app:layout_constraintVertical_bias="0.977"[m
[32m+[m[32m        tools:ignore="MissingConstraints" />[m
[32m+[m
[32m+[m[32m    <TextView[m
[32m+[m[32m        android:id="@+id/summery_time_result"[m
[32m+[m[32m        android:layout_width="79dp"[m
[32m+[m[32m        android:layout_height="56dp"[m
[32m+[m[32m        android:gravity="center"[m
[32m+[m[32m        android:textSize="24sp"[m
[32m+[m[32m        app:layout_constraintBottom_toTopOf="@+id/to_menu_btn"[m
[32m+[m[32m        app:layout_constraintEnd_toEndOf="parent"[m
[32m+[m[32m        app:layout_constraintHorizontal_bias="0.587"[m
[32m+[m[32m        app:layout_constraintStart_toStartOf="parent"[m
[32m+[m[32m        app:layout_constraintTop_toBottomOf="@+id/animation_txt"[m
[32m+[m[32m        app:layout_constraintVertical_bias="0.977"[m
[32m+[m[32m        tools:ignore="MissingConstraints" />[m
[32m+[m
[32m+[m[32m    <Button[m
[32m+[m[32m        android:id="@+id/to_menu_btn"[m
[32m+[m[32m        android:layout_width="wrap_content"[m
[32m+[m[32m        android:layout_height="wrap_content"[m
[32m+[m[32m        android:text="@string/tomenu_txt"[m
[32m+[m[32m        app:layout_constraintBottom_toBottomOf="parent"[m
[32m+[m[32m        app:layout_constraintEnd_toEndOf="parent"[m
[32m+[m[32m        app:layout_constraintHorizontal_bias="0.467"[m
[32m+[m[32m        app:layout_constraintStart_toStartOf="parent"[m
[32m+[m[32m        app:layout_constraintTop_toTopOf="parent"[m
[32m+[m[32m        app:layout_constraintVertical_bias="1.0"[m
[32m+[m[32m        tools:ignore="MissingConstraints" />[m
[32m+[m
[32m+[m
[32m+[m[32m</androidx.constraintlayout.widget.ConstraintLayout>[m
\ No newline at end of file[m
[1mdiff --git a/app/src/main/res/mipmap-anydpi-v26/ic_launcher.xml b/app/src/main/res/mipmap-anydpi-v26/ic_launcher.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..036d09b[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/res/mipmap-anydpi-v26/ic_launcher.xml[m
[36m@@ -0,0 +1,5 @@[m
[32m+[m[32m<?xml version="1.0" encoding="utf-8"?>[m
[32m+[m[32m<adaptive-icon xmlns:android="http://schemas.android.com/apk/res/android">[m
[32m+[m[32m    <background android:drawable="@color/ic_launcher_background"/>[m
[32m+[m[32m    <foreground android:drawable="@mipmap/ic_launcher_foreground"/>[m
[32m+[m[32m</adaptive-icon>[m
\ No newline at end of file[m
[1mdiff --git a/app/src/main/res/mipmap-anydpi-v26/ic_launcher_round.xml b/app/src/main/res/mipmap-anydpi-v26/ic_launcher_round.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..036d09b[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/res/mipmap-anydpi-v26/ic_launcher_round.xml[m
[36m@@ -0,0 +1,5 @@[m
[32m+[m[32m<?xml version="1.0" encoding="utf-8"?>[m
[32m+[m[32m<adaptive-icon xmlns:android="http://schemas.android.com/apk/res/android">[m
[32m+[m[32m    <background android:drawable="@color/ic_launcher_background"/>[m
[32m+[m[32m    <foreground android:drawable="@mipmap/ic_launcher_foreground"/>[m
[32m+[m[32m</adaptive-icon>[m
\ No newline at end of file[m
[1mdiff --git a/app/src/main/res/mipmap-hdpi/ic_launcher_foreground.png b/app/src/main/res/mipmap-hdpi/ic_launcher_foreground.png[m
[1mnew file mode 100644[m
[1mindex 0000000..1cf7dbe[m
Binary files /dev/null and b/app/src/main/res/mipmap-hdpi/ic_launcher_foreground.png differ
[1mdiff --git a/app/src/main/res/mipmap-hdpi/ic_launcher_round.png b/app/src/main/res/mipmap-hdpi/ic_launcher_round.png[m
[1mnew file mode 100644[m
[1mindex 0000000..39166bf[m
Binary files /dev/null and b/app/src/main/res/mipmap-hdpi/ic_launcher_round.png differ
[1mdiff --git a/app/src/main/res/mipmap-mdpi/ic_launcher_round.png b/app/src/main/res/mipmap-mdpi/ic_launcher_round.png[m
[1mnew file mode 100644[m
[1mindex 0000000..a2f0999[m
Binary files /dev/null and b/app/src/main/res/mipmap-mdpi/ic_launcher_round.png differ
[1mdiff --git a/app/src/main/res/mipmap-xhdpi/ic_launcher_round.png b/app/src/main/res/mipmap-xhdpi/ic_launcher_round.png[m
[1mnew file mode 100644[m
[1mindex 0000000..4383b2d[m
Binary files /dev/null and b/app/src/main/res/mipmap-xhdpi/ic_launcher_round.png differ
[1mdiff --git a/app/src/main/res/mipmap-xxhdpi/ic_launcher_round.png b/app/src/main/res/mipmap-xxhdpi/ic_launcher_round.png[m
[1mnew file mode 100644[m
[1mindex 0000000..f9cbd29[m
Binary files /dev/null and b/app/src/main/res/mipmap-xxhdpi/ic_launcher_round.png differ
[1mdiff --git a/app/src/main/res/mipmap-xxxhdpi/ic_launcher_round.png b/app/src/main/res/mipmap-xxxhdpi/ic_launcher_round.png[m
[1mnew file mode 100644[m
[1mindex 0000000..959d656[m
Binary files /dev/null and b/app/src/main/res/mipmap-xxxhdpi/ic_launcher_round.png differ
[1mdiff --git a/app/src/main/res/raw/sound.mp3 b/app/src/main/res/raw/sound.mp3[m
[1mnew file mode 100644[m
[1mindex 0000000..eaa88e1[m
Binary files /dev/null and b/app/src/main/res/raw/sound.mp3 differ
[1mdiff --git a/app/src/main/res/values-iw-rIL/strings.xml b/app/src/main/res/values-iw-rIL/strings.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..845666f[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/res/values-iw-rIL/strings.xml[m
[36m@@ -0,0 +1,232 @@[m
[32m+[m[32m<?xml version="1.0" encoding="utf-8"?>[m
[32m+[m[32m<resources>[m
[32m+[m[32m    <string name="app_name">FunWithFlags App</string>[m
[32m+[m[32m    <string name="hebrew_rd_txt">עב</string>[m
[32m+[m[32m    <string name="english_rd_txt">אנ</string>[m
[32m+[m[32m    <string name="music_txt">מוזיקה</string>[m
[32m+[m[32m    <string name="scoreTable_txt">רשימת שיאים</string>[m
[32m+[m[32m    <string name="tomenu_txt">תפריט</string>[m
[32m+[m[32m    <string name="timeLeft.txt">הזמן שנשאר:</string>[m
[32m+[m[32m    <string name="blessing.txt">שלום</string>[m
[32m+[m[32m    <string name="Easy_txt">קל</string>[m
[32m+[m[32m    <string name="Medium_txt">בינוני</string>[m
[32m+[m[32m    <string name="Hard_txt">קשה</string>[m
[32m+[m[32m    <string name="menu_txt">תפריט FunWithFlags</string>[m
[32m+[m[32m    <string name="registerPage_txt">הרשמה</string>[m
[32m+[m[32m    <string name="create_Account">צור חשבון</string>[m
[32m+[m[32m    <string name="Logout_btn_txt">התנתקות</string>[m
[32m+[m[32m    <string name="Login_btn_txt">התחברות</string>[m
[32m+[m[32m    <string name="top_title">ברוך הבא ל  FunWithFlags</string>[m
[32m+[m[32m    <string name="register_txt">הרשמה</string>[m
[32m+[m[32m    <string name="password_txt">סיסמה</string>[m
[32m+[m[32m    <string name="country_txt">מדינה</string>[m
[32m+[m[32m    <string name="user_txt">שם משתמש</string>[m
[32m+[m[32m    <string name="email_txt">אימייל</string>[m
[32m+[m[32m    <string name="rememberMe_txt">זכור אותי</string>[m
[32m+[m[32m    <string name="Game_txt">משחק</string>[m
[32m+[m[32m    <string name="Summery_txt">סיכום משחק</string>[m
[32m+[m[32m    <string name="ScoreScreen_txt">מסך שיאים</string>[m
[32m+[m[32m    <string name="name">שם:</string>[m
[32m+[m[32m    <string name="level">רמה:</string>[m
[32m+[m[32m    <string name="score">נקודות:</string>[m
[32m+[m[32m    <string name="time">זמן:</string>[m
[32m+[m[32m    <string name="score_title">" נקודות  |  שם משתמש   |  אימייל "</string>[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32m    <string name="Afghanistan">אפגניסטן</string>[m
[32m+[m[32m    <string name="Algeria">אלגיריה</string>[m
[32m+[m[32m    <string name="Andorra">אנדורה</string>[m
[32m+[m[32m    <string name="Argentina">ארגנטינה</string>[m
[32m+[m[32m    <string name="Armenia">אַרְמֶנִיָה</string>[m
[32m+[m[32m    <string name="Australia">אוֹסטְרַלִיָה</string>[m
[32m+[m[32m    <string name="Austria">אוֹסְטְרֵיָה</string>[m
[32m+[m[32m    <string name="Azerbaijan">אזרבייגן</string>[m
[32m+[m[32m    <string name="Belgium">בלגיה</string>[m
[32m+[m[32m    <string name="Bolivia">בוליביה</string>[m
[32m+[m[32m    <string name="BosniaandHerzegovina">בוסניה והרצגובינה</string>[m
[32m+[m[32m    <string name="Brazil">בְּרָזִיל</string>[m
[32m+[m[32m    <string name="Bulgaria">בולגריה</string>[m
[32m+[m[32m    <string name="Canada">קנדה</string>[m
[32m+[m[32m    <string name="Chile">צילה</string>[m
[32m+[m[32m    <string name="China">חרסינה</string>[m
[32m+[m[32m    <string name="Colombia">קולומביה</string>[m
[32m+[m[32m    <string name="Croatia">קרואטיה</string>[m
[32m+[m[32m    <string name="Cyprus">קַפרִיסִין</string>[m
[32m+[m[32m    <string name="Denmark">דנמרק</string>[m
[32m+[m[32m    <string name="Egypt">מִצְרַיִם</string>[m
[32m+[m[32m    <string name="Eritrea">אריתריאה</string>[m
[32m+[m[32m    <string name="Ethiopia">אֶתִיוֹפִּיָה</string>[m
[32m+[m[32m    <string name="France">צָרְפַת</string>[m
[32m+[m[32m    <string name="Georgia">גורגיה</string>[m
[32m+[m[32m    <string name="Germany">גֶרמָנִיָה</string>[m
[32m+[m[32m    <string name="Greece">יָוָן</string>[m
[32m+[m[32m    <string name="Honduras">הונדורס</string>[m
[32m+[m[32m    <string name="Hungary">הונגריה</string>[m
[32m+[m[32m    <string name="Iceland">אִיסלַנד</string>[m
[32m+[m[32m    <string name="India">הוֹדוּ</string>[m
[32m+[m[32m    <string name="Iran">איראן</string>[m
[32m+[m[32m    <string name="Iraq">עִירַאק</string>[m
[32m+[m[32m    <string name="Ireland">אירלנד</string>[m
[32m+[m[32m    <string name="Israel">ישראל</string>[m
[32m+[m[32m    <string name="Italy">אִיטַלִיָה</string>[m
[32m+[m[32m    <string name="Japan">יפן</string>[m
[32m+[m[32m    <string name="Jordan">יַרדֵן</string>[m
[32m+[m[32m    <string name="Kazakhstan">קזחסטן</string>[m
[32m+[m[32m    <string name="NorthKorea">צפון קוריאה</string>[m
[32m+[m[32m    <string name="SouthKorea">דרום קוריאה</string>[m
[32m+[m[32m    <string name="Lebanon">לבנון</string>[m
[32m+[m[32m    <string name="Liechtenstein">ליכטנשטיין</string>[m
[32m+[m[32m    <string name="Mexico">מקסיקו</string>[m
[32m+[m[32m    <string name="Netherlands">הולנד</string>[m
[32m+[m[32m    <string name="Nigeria">ניגריה</string>[m
[32m+[m[32m    <string name="Pakistan">פקיסטן</string>[m
[32m+[m[32m    <string name="Paraguay">פרגוואי</string>[m
[32m+[m[32m    <string name="Peru">פרו</string>[m
[32m+[m[32m    <string name="Poland">פּוֹלִין</string>[m
[32m+[m[32m    <string name="Portugal">פּוֹרטוּגָל</string>[m
[32m+[m[32m    <string name="Qatar">קטאר</string>[m
[32m+[m[32m    <string name="Romania">רומניה</string>[m
[32m+[m[32m    <string name="RussianFederation">הפדרציה הרוסית</string>[m
[32m+[m[32m    <string name="Singapore">סינגפור</string>[m
[32m+[m[32m    <string name="SouthAfrica">דרום אפריקה</string>[m
[32m+[m[32m    <string name="Spain">סְפָרַד</string>[m
[32m+[m[32m    <string name="Sudan">סודן</string>[m
[32m+[m[32m    <string name="Sweden">שבדיה</string>[m
[32m+[m[32m    <string name="Switzerland">שוויץ</string>[m
[32m+[m[32m    <string name="SyrianArabRepublic">סוריה</string>[m
[32m+[m[32m    <string name="Turkey">טורקיה</string>[m
[32m+[m[32m    <string name="Uganda">אוגנדה</string>[m
[32m+[m[32m    <string name="Ukraine">אוקראינה</string>[m
[32m+[m[32m    <string name="UnitedArabEmirates">איחוד האמירויות הערביות</string>[m
[32m+[m[32m    <string name="UnitedKingdom">הממלכהה מאוחדת</string>[m
[32m+[m[32m    <string name="UnitedStatesofAmerica">ארצות הברית</string>[m
[32m+[m[32m    <string name="Uruguay">אורוגוואי</string>[m
[32m+[m[32m    <string name="Albania">אלבניה</string>[m
[32m+[m[32m    <string name="Angola">אנגולה</string>[m
[32m+[m[32m    <string name="Bahrain">בחריין</string>[m
[32m+[m[32m    <string name="Belarus">בלארוס</string>[m
[32m+[m[32m    <string name="Cambodia">קמבודיה</string>[m
[32m+[m[32m    <string name="CentralAfricanRepublic">הרפובליקה המרכז-אפריקאית</string>[m
[32m+[m[32m    <string name="Congo">קונגו</string>[m
[32m+[m[32m    <string name="CostaRica">קוסטהריקה</string>[m
[32m+[m[32m    <string name="Cuba">קובה</string>[m
[32m+[m[32m    <string name="Czechia">צכיה</string>[m
[32m+[m[32m    <string name="Dominica">דומיניקה</string>[m
[32m+[m[32m    <string name="DominicanRepublic">הרפובליקה הדומיניקנית</string>[m
[32m+[m[32m    <string name="Ecuador">אקוודור</string>[m
[32m+[m[32m    <string name="Estonia">אסטוניה</string>[m
[32m+[m[32m    <string name="Finland">פינלנד</string>[m
[32m+[m[32m    <string name="Gambia">גמביה</string>[m
[32m+[m[32m    <string name="Ghana">גאנה</string>[m
[32m+[m[32m    <string name="Guatemala">גואטמלה</string>[m
[32m+[m[32m    <string name="Guinea">גינאה</string>[m
[32m+[m[32m    <string name="Guyana">גיאנה</string>[m
[32m+[m[32m    <string name="Haiti">האיטי</string>[m
[32m+[m[32m    <string name="Indonesia">אִינדוֹנֵזִיָה</string>[m
[32m+[m[32m    <string name="Jamaica">גמייקה</string>[m
[32m+[m[32m    <string name="Kyrgyzstan">קירגיסטן</string>[m
[32m+[m[32m    <string name="Latvia">לטביה</string>[m
[32m+[m[32m    <string name="Luxembourg">לוקסמבורג</string>[m
[32m+[m[32m    <string name="Madagascar">מדגסקר</string>[m
[32m+[m[32m    <string name="Malaysia">מלזיה</string>[m
[32m+[m[32m    <string name="Maldives">האייםהמלדיביים</string>[m
[32m+[m[32m    <string name="Malta">מלטה</string>[m
[32m+[m[32m    <string name="MarshallIslands">איימרשל</string>[m
[32m+[m[32m    <string name="Mongolia">מונגוליה</string>[m
[32m+[m[32m    <string name="Namibia">נמיביה</string>[m
[32m+[m[32m    <string name="Nauru">נאורו</string>[m
[32m+[m[32m    <string name="NewZealand">ניוזילנד</string>[m
[32m+[m[32m    <string name="Oman">עומאן</string>[m
[32m+[m[32m    <string name="Panama">פנמה</string>[m
[32m+[m[32m    <string name="SaudiArabia">ערב הסעודית</string>[m
[32m+[m[32m    <string name="Senegal">סנגל</string>[m
[32m+[m[32m    <string name="Slovakia">סלובקיה</string>[m
[32m+[m[32m    <string name="Slovenia">סלובניה</string>[m
[32m+[m[32m    <string name="SriLanka">סרילנקה</string>[m
[32m+[m[32m    <string name="Tanzania">טנזניה</string>[m
[32m+[m[32m    <string name="Thailand">תאילנד</string>[m
[32m+[m[32m    <string name="Uzbekistan">אוזבקיסטן</string>[m
[32m+[m[32m    <string name="Venezuela">ונצואלה</string>[m
[32m+[m[32m    <string name="Zambia">זמביה</string>[m
[32m+[m[32m    <string name="Zimbabwe">זימבבואה</string>[m
[32m+[m[32m    <string name="AntiguaandBarbuda">אנטיגואה וברבודה</string>[m
[32m+[m[32m    <string name="Bahamas">איי בהאמה</string>[m
[32m+[m[32m    <string name="Bangladesh">בנגלדש</string>[m
[32m+[m[32m    <string name="Barbados">ברבדוס</string>[m
[32m+[m[32m    <string name="Belize">בליז</string>[m
[32m+[m[32m    <string name="Benin">בנין</string>[m
[32m+[m[32m    <string name="Bhutan">בוטאן</string>[m
[32m+[m[32m    <string name="Botswana">בוצואנה</string>[m
[32m+[m[32m    <string name="BruneiDarussalam">ברוניי דארוסלאם</string>[m
[32m+[m[32m    <string name="BurkinaFaso">בורקינהפאסו</string>[m
[32m+[m[32m    <string name="Burundi">בורונדי</string>[m
[32m+[m[32m    <string name="CaboVerde">קאבוורדה</string>[m
[32m+[m[32m    <string name="Cameroon">קמרון</string>[m
[32m+[m[32m    <string name="Chad">צאד</string>[m
[32m+[m[32m    <string name="Comoros">קומורו</string>[m
[32m+[m[32m    <string name="DemocraticRepublicofthecongo">קונגו</string>[m
[32m+[m[32m    <string name="Djibouti">גיבוטי</string>[m
[32m+[m[32m    <string name="ElSalvador">אלסלבדור</string>[m
[32m+[m[32m    <string name="EquatorialGuinea">גיניאה המשוונית</string>[m
[32m+[m[32m    <string name="Eswatini">אסווטיני</string>[m
[32m+[m[32m    <string name="Fiji">פיגי</string>[m
[32m+[m[32m    <string name="Gabon">גבון</string>[m
[32m+[m[32m    <string name="Grenada">גרנדה</string>[m
[32m+[m[32m    <string name="GuineaBissau">גינאה-ביסאו</string>[m
[32m+[m[32m    <string name="Kenya">קניה</string>[m
[32m+[m[32m    <string name="Kiribati">קיריבטי</string>[m
[32m+[m[32m    <string name="Kuwait">כווית</string>[m
[32m+[m[32m    <string name="LaoRepublic">לאו הרפובליקה</string>[m
[32m+[m[32m    <string name="Lesotho">לסוטו</string>[m
[32m+[m[32m    <string name="Liberia">ליבריה</string>[m
[32m+[m[32m    <string name="Libya">לוב</string>[m
[32m+[m[32m    <string name="Lithuania">ליטא</string>[m
[32m+[m[32m    <string name="Malawi">מלאווי</string>[m
[32m+[m[32m    <string name="Mali">מאלי</string>[m
[32m+[m[32m    <string name="Mauritania">מאוריטניה</string>[m
[32m+[m[32m    <string name="Mauritius">מאוריציוס</string>[m
[32m+[m[32m    <string name="Micronesia">מיקרונזיה</string>[m
[32m+[m[32m    <string name="MoldovaRepublic">מולדובה</string>[m
[32m+[m[32m    <string name="Monaco">מונאקו</string>[m
[32m+[m[32m    <string name="Montenegro">מונטנגרו</string>[m
[32m+[m[32m    <string name="Morocco">מָרוֹקוֹ</string>[m
[32m+[m[32m    <string name="Mozambique">מוזמביק</string>[m
[32m+[m[32m    <string name="Myanmar">מיאנמר</string>[m
[32m+[m[32m    <string name="Nepal">נפאל</string>[m
[32m+[m[32m    <string name="Nicaragua">ניקרגואה</string>[m
[32m+[m[32m    <string name="Niger">ניגר</string>[m
[32m+[m[32m    <string name="NorthMacedonia">צפון מקדוניה</string>[m
[32m+[m[32m    <string name="Norway">נורווגיה</string>[m
[32m+[m[32m    <string name="Palau">פלאו</string>[m
[32m+[m[32m    <string name="PapuaNewGuinea">פפואה גינאה החדשה</string>[m
[32m+[m[32m    <string name="Philippines">הפיליפינים</string>[m
[32m+[m[32m    <string name="Rwanda">רואנדה</string>[m
[32m+[m[32m    <string name="SaintKittsandNevis">סנטקיטסונביס</string>[m
[32m+[m[32m    <string name="SaintLucia">סנטלוסיה</string>[m
[32m+[m[32m    <string name="SaintVincentandtheGrenadines">וינסנט הקדוש והגרנידיים</string>[m
[32m+[m[32m    <string name="Samoa">סמואה</string>[m
[32m+[m[32m    <string name="SanMarino">סןמרינו</string>[m
[32m+[m[32m    <string name="SaoTomeandPrincipe">סאו טוםו פרינסיפה</string>[m
[32m+[m[32m    <string name="Serbia">סרביה</string>[m
[32m+[m[32m    <string name="Seychelles">סיישל</string>[m
[32m+[m[32m    <string name="SierraLeone">סיירה לאון</string>[m
[32m+[m[32m    <string name="SolomonIslands">איי שלמה</string>[m
[32m+[m[32m    <string name="Somalia">סומליה</string>[m
[32m+[m[32m    <string name="SouthSudan">דרום סודן</string>[m
[32m+[m[32m    <string name="Suriname">סורינאם</string>[m
[32m+[m[32m    <string name="Tajikistan">טגיקיסטן</string>[m
[32m+[m[32m    <string name="TimorLeste">טימור-לסטה</string>[m
[32m+[m[32m    <string name="Togo">טוגו</string>[m
[32m+[m[32m    <string name="Tonga">טונגה</string>[m
[32m+[m[32m    <string name="TrinidadandTobago">טרינידדו טובגו</string>[m
[32m+[m[32m    <string name="Tunisia">תוניסיה</string>[m
[32m+[m[32m    <string name="Turkmenistan">טורקמניסטן</string>[m
[32m+[m[32m    <string name="Tuvalu">טובאלו</string>[m
[32m+[m[32m    <string name="Vanuatu">ונואטו</string>[m
[32m+[m[32m    <string name="VietNam">ויאטנם</string>[m
[32m+[m[32m    <string name="Yemen">תֵימָן</string>[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32m</resources>[m
\ No newline at end of file[m
[1mdiff --git a/app/src/main/res/values-night/themes.xml b/app/src/main/res/values-night/themes.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..4b90c19[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/res/values-night/themes.xml[m
[36m@@ -0,0 +1,16 @@[m
[32m+[m[32m<resources xmlns:tools="http://schemas.android.com/tools">[m
[32m+[m[32m    <!-- Base application theme. -->[m
[32m+[m[32m    <style name="Theme.FunWithFlags" parent="Theme.MaterialComponents.DayNight.DarkActionBar">[m
[32m+[m[32m        <!-- Primary brand color. -->[m
[32m+[m[32m        <item name="colorPrimary">@color/purple_200</item>[m
[32m+[m[32m        <item name="colorPrimaryVariant">@color/purple_700</item>[m
[32m+[m[32m        <item name="colorOnPrimary">@color/black</item>[m
[32m+[m[32m        <!-- Secondary brand color. -->[m
[32m+[m[32m        <item name="colorSecondary">@color/teal_200</item>[m
[32m+[m[32m        <item name="colorSecondaryVariant">@color/teal_200</item>[m
[32m+[m[32m        <item name="colorOnSecondary">@color/black</item>[m
[32m+[m[32m        <!-- Status bar color. -->[m
[32m+[m[32m        <item name="android:statusBarColor" tools:targetApi="l">?attr/colorPrimaryVariant</item>[m
[32m+[m[32m        <!-- Customize your theme here. -->[m
[32m+[m[32m    </style>[m
[32m+[m[32m</resources>[m
\ No newline at end of file[m
[1mdiff --git a/app/src/main/res/values/colors.xml b/app/src/main/res/values/colors.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..a3020dc[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/res/values/colors.xml[m
[36m@@ -0,0 +1,19 @@[m
[32m+[m[32m<?xml version="1.0" encoding="utf-8"?>[m
[32m+[m[32m<resources>[m
[32m+[m[32m    <color name="purple_200">#FFBB86FC</color>[m
[32m+[m[32m    <color name="purple_500">#FF6200EE</color>[m
[32m+[m[32m    <color name="purple_700">#FF3700B3</color>[m
[32m+[m[32m    <color name="teal_200">#FF03DAC5</color>[m
[32m+[m[32m    <color name="teal_700">#FF018786</color>[m
[32m+[m[32m    <color name="black">#FF000000</color>[m
[32m+[m[32m    <color name="white">#FFFFFFFF</color>[m
[32m+[m[32m    <color name="yellow">#CDDC39</color>[m
[32m+[m
[32m+[m
[32m+[m[32m    <color name="colorPrimary">#6200EE</color>[m
[32m+[m[32m    <color name="red">#D40031</color>[m
[32m+[m[32m    <color name="colorAccent">#03DAC5</color>[m
[32m+[m[32m    <color name="colorWhite">#FFFFFF</color>[m
[32m+[m
[32m+[m
[32m+[m[32m</resources>[m
\ No newline at end of file[m
[1mdiff --git a/app/src/main/res/values/ic_launcher_background.xml b/app/src/main/res/values/ic_launcher_background.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..92df263[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/res/values/ic_launcher_background.xml[m
[36m@@ -0,0 +1,4 @@[m
[32m+[m[32m<?xml version="1.0" encoding="utf-8"?>[m
[32m+[m[32m<resources>[m
[32m+[m[32m    <color name="ic_launcher_background">#F3F9F6</color>[m
[32m+[m[32m</resources>[m
\ No newline at end of file[m
[1mdiff --git a/app/src/main/res/values/strings.xml b/app/src/main/res/values/strings.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..c90fc95[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/res/values/strings.xml[m
[36m@@ -0,0 +1,233 @@[m
[32m+[m[32m<resources>[m
[32m+[m[32m    <string name="app_name">FunWithFlags App</string>[m
[32m+[m[32m    <string name="email_txt">Email</string>[m
[32m+[m[32m    <string name="user_txt">User Name</string>[m
[32m+[m[32m    <string name="country_txt">Country</string>[m
[32m+[m[32m    <string name="password_txt">Password</string>[m
[32m+[m[32m    <string name="register_txt">Register</string>[m
[32m+[m[32m    <string name="top_title">Welcome to FunWithFlags!</string>[m
[32m+[m[32m    <string name="Login_btn_txt">Log In</string>[m
[32m+[m[32m    <string name="Logout_btn_txt">Log Out</string>[m
[32m+[m[32m    <string name="create_Account">Create a new Account!</string>[m
[32m+[m[32m    <string name="registerPage_txt">Register Page</string>[m
[32m+[m[32m    <string name="menu_txt">Menu FunWithFlags</string>[m
[32m+[m[32m    <string name="Hard_txt">Hard</string>[m
[32m+[m[32m    <string name="Medium_txt">Medium</string>[m
[32m+[m[32m    <string name="Easy_txt">Easy</string>[m
[32m+[m[32m    <string name="blessing.txt">Hello</string>[m
[32m+[m[32m    <string name="guide.txt" translatable="false"></string>[m
[32m+[m[32m    <string name="timeLeft.txt">Left Time:</string>[m
[32m+[m[32m    <string name="tomenu_txt">Menu</string>[m
[32m+[m[32m    <string name="scoreTable_txt">Score Table</string>[m
[32m+[m[32m    <string name="music_txt">Music</string>[m
[32m+[m[32m    <string name="english_rd_txt">EN</string>[m
[32m+[m[32m    <string name="hebrew_rd_txt">HE</string>[m
[32m+[m[32m    <string name="rememberMe_txt">Remember Me</string>[m
[32m+[m[32m    <string name="Game_txt">Game</string>[m
[32m+[m[32m    <string name="Summery_txt">Summery</string>[m
[32m+[m[32m    <string name="ScoreScreen_txt">ScoreScreen</string>[m
[32m+[m[32m    <string name="name">Name:</string>[m
[32m+[m[32m    <string name="level">Level:</string>[m
[32m+[m[32m    <string name="score">Score:</string>[m
[32m+[m[32m    <string name="time">Time:</string>[m
[32m+[m[32m    <string name="score_title">" Email  |  Username   |  Score "</string>[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32m    <string name="Afghanistan">Afghanistan</string>[m
[32m+[m[32m    <string name="Algeria">Algeria</string>[m
[32m+[m[32m    <string name="Andorra">Andorra</string>[m
[32m+[m[32m    <string name="Argentina">Argentina</string>[m
[32m+[m[32m    <string name="Armenia">Armenia</string>[m
[32m+[m[32m    <string name="Australia">Australia</string>[m
[32m+[m[32m    <string name="Austria">Austria</string>[m
[32m+[m[32m    <string name="Azerbaijan">Azerbaijan</string>[m
[32m+[m[32m    <string name="Belgium">Belgium</string>[m
[32m+[m[32m    <string name="Bolivia">Bolivia</string>[m
[32m+[m[32m    <string name="BosniaandHerzegovina">Bosnia and Herzegovina</string>[m
[32m+[m[32m    <string name="Brazil">Brazil</string>[m
[32m+[m[32m    <string name="Bulgaria">Bulgaria</string>[m
[32m+[m[32m    <string name="Canada">Canada</string>[m
[32m+[m[32m    <string name="Chile">Chile</string>[m
[32m+[m[32m    <string name="China">China</string>[m
[32m+[m[32m    <string name="Colombia">Colombia</string>[m
[32m+[m[32m    <string name="Croatia">Croatia</string>[m
[32m+[m[32m    <string name="Cyprus">Cyprus</string>[m
[32m+[m[32m    <string name="Denmark">Denmark</string>[m
[32m+[m[32m    <string name="Egypt">Egypt</string>[m
[32m+[m[32m    <string name="Eritrea">Eritrea</string>[m
[32m+[m[32m    <string name="Ethiopia">Ethiopia</string>[m
[32m+[m[32m    <string name="France">France</string>[m
[32m+[m[32m    <string name="Georgia">Georgia</string>[m
[32m+[m[32m    <string name="Germany">Germany</string>[m
[32m+[m[32m    <string name="Greece">Greece</string>[m
[32m+[m[32m    <string name="Honduras">Honduras</string>[m
[32m+[m[32m    <string name="Hungary">Hungary</string>[m
[32m+[m[32m    <string name="Iceland">Iceland</string>[m
[32m+[m[32m    <string name="India">India</string>[m
[32m+[m[32m    <string name="Iran">Iran</string>[m
[32m+[m[32m    <string name="Iraq">Iraq</string>[m
[32m+[m[32m    <string name="Ireland">Ireland</string>[m
[32m+[m[32m    <string name="Israel">Israel</string>[m
[32m+[m[32m    <string name="Italy">Italy</string>[m
[32m+[m[32m    <string name="Japan">Japan</string>[m
[32m+[m[32m    <string name="Jordan">Jordan</string>[m
[32m+[m[32m    <string name="Kazakhstan">Kazakhstan</string>[m
[32m+[m[32m    <string name="NorthKorea">North Korea</string>[m
[32m+[m[32m    <string name="SouthKorea">South Korea</string>[m
[32m+[m[32m    <string name="Lebanon">Lebanon</string>[m
[32m+[m[32m    <string name="Liechtenstein">Liechtenstein</string>[m
[32m+[m[32m    <string name="Mexico">Mexico</string>[m
[32m+[m[32m    <string name="Netherlands">Netherlands</string>[m
[32m+[m[32m    <string name="Nigeria">Nigeria</string>[m
[32m+[m[32m    <string name="Pakistan">Pakistan</string>[m
[32m+[m[32m    <string name="Paraguay">Paraguay</string>[m
[32m+[m[32m    <string name="Peru">Peru</string>[m
[32m+[m[32m    <string name="Poland">Poland</string>[m
[32m+[m[32m    <string name="Portugal">Portugal</string>[m
[32m+[m[32m    <string name="Qatar">Qatar</string>[m
[32m+[m[32m    <string name="Romania">Romania</string>[m
[32m+[m[32m    <string name="RussianFederation">Russian Federation</string>[m
[32m+[m[32m    <string name="Singapore">Singapore</string>[m
[32m+[m[32m    <string name="SouthAfrica">South Africa</string>[m
[32m+[m[32m    <string name="Spain">Spain</string>[m
[32m+[m[32m    <string name="Sudan">Sudan</string>[m
[32m+[m[32m    <string name="Sweden">Sweden</string>[m
[32m+[m[32m    <string name="Switzerland">Switzerland</string>[m
[32m+[m[32m    <string name="SyrianArabRepublic">Syrian Arab Republic</string>[m
[32m+[m[32m    <string name="Turkey">Turkey</string>[m
[32m+[m[32m    <string name="Uganda">Uganda</string>[m
[32m+[m[32m    <string name="Ukraine">Ukraine</string>[m
[32m+[m[32m    <string name="UnitedArabEmirates">United Arab Emirates</string>[m
[32m+[m[32m    <string name="UnitedKingdom">United Kingdom</string>[m
[32m+[m[32m    <string name="UnitedStatesofAmerica">United States of America</string>[m
[32m+[m[32m    <string name="Uruguay">Uruguay</string>[m
[32m+[m[32m    <string name="Albania">Albania</string>[m
[32m+[m[32m    <string name="Angola">Angola</string>[m
[32m+[m[32m    <string name="Bahrain">Bahrain</string>[m
[32m+[m[32m    <string name="Belarus">Belarus</string>[m
[32m+[m[32m    <string name="Cambodia">Cambodia</string>[m
[32m+[m[32m    <string name="CentralAfricanRepublic">Central African Republic</string>[m
[32m+[m[32m    <string name="Congo">Congo</string>[m
[32m+[m[32m    <string name="CostaRica">Costa Rica</string>[m
[32m+[m[32m    <string name="Cuba">Cuba</string>[m
[32m+[m[32m    <string name="Czechia">Czechia</string>[m
[32m+[m[32m    <string name="Dominica">Dominica</string>[m
[32m+[m[32m    <string name="DominicanRepublic">Dominican Republic</string>[m
[32m+[m[32m    <string name="Ecuador">Ecuador</string>[m
[32m+[m[32m    <string name="Estonia">Estonia</string>[m
[32m+[m[32m    <string name="Finland">Finland</string>[m
[32m+[m[32m    <string name="Gambia">Gambia</string>[m
[32m+[m[32m    <string name="Ghana">Ghana</string>[m
[32m+[m[32m    <string name="Guatemala">Guatemala</string>[m
[32m+[m[32m    <string name="Guinea">Guinea</string>[m
[32m+[m[32m    <string name="Guyana">Guyana</string>[m
[32m+[m[32m    <string name="Haiti">Haiti</string>[m
[32m+[m[32m    <string name="Indonesia">Indonesia</string>[m
[32m+[m[32m    <string name="Jamaica">Jamaica</string>[m
[32m+[m[32m    <string name="Kyrgyzstan">Kyrgyzstan</string>[m
[32m+[m[32m    <string name="Latvia">Latvia</string>[m
[32m+[m[32m    <string name="Luxembourg">Luxembourg</string>[m
[32m+[m[32m    <string name="Madagascar">Madagascar</string>[m
[32m+[m[32m    <string name="Malaysia">Malaysia</string>[m
[32m+[m[32m    <string name="Maldives">Maldives</string>[m
[32m+[m[32m    <string name="Malta">Malta</string>[m
[32m+[m[32m    <string name="MarshallIslands">Marshall Islands</string>[m
[32m+[m[32m    <string name="Mongolia">Mongolia</string>[m
[32m+[m[32m    <string name="Namibia">Namibia</string>[m
[32m+[m[32m    <string name="Nauru">Nauru</string>[m
[32m+[m[32m    <string name="NewZealand">New Zealand</string>[m
[32m+[m[32m    <string name="Oman">Oman</string>[m
[32m+[m[32m    <string name="Panama">Panama</string>[m
[32m+[m[32m    <string name="SaudiArabia">Saudi Arabia</string>[m
[32m+[m[32m    <string name="Senegal">Senegal</string>[m
[32m+[m[32m    <string name="Slovakia">Slovakia</string>[m
[32m+[m[32m    <string name="Slovenia">Slovenia</string>[m
[32m+[m[32m    <string name="SriLanka">Sri Lanka</string>[m
[32m+[m[32m    <string name="Tanzania">Tanzania</string>[m
[32m+[m[32m    <string name="Thailand">Thailand</string>[m
[32m+[m[32m    <string name="Uzbekistan">Uzbekistan</string>[m
[32m+[m[32m    <string name="Venezuela">Venezuela</string>[m
[32m+[m[32m    <string name="Zambia">Zambia</string>[m
[32m+[m[32m    <string name="Zimbabwe">Zimbabwe</string>[m
[32m+[m[32m    <string name="AntiguaandBarbuda">Antigua and Barbuda</string>[m
[32m+[m[32m    <string name="Bahamas">Bahamas</string>[m
[32m+[m[32m    <string name="Bangladesh">Bangladesh</string>[m
[32m+[m[32m    <string name="Barbados">Barbados</string>[m
[32m+[m[32m    <string name="Belize">Belize</string>[m
[32m+[m[32m    <string name="Benin">Benin</string>[m
[32m+[m[32m    <string name="Bhutan">Bhutan</string>[m
[32m+[m[32m    <string name="Botswana">Botswana</string>[m
[32m+[m[32m    <string name="BruneiDarussalam">Brunei Darussalam</string>[m
[32m+[m[32m    <string name="BurkinaFaso">Burkina Faso</string>[m
[32m+[m[32m    <string name="Burundi">Burundi</string>[m
[32m+[m[32m    <string name="CaboVerde">Cabo Verde</string>[m
[32m+[m[32m    <string name="Cameroon">Cameroon</string>[m
[32m+[m[32m    <string name="Chad">Chad</string>[m
[32m+[m[32m    <string name="Comoros">Comoros</string>[m
[32m+[m[32m    <string name="DemocraticRepublicofthecongo">Democratic Republic of the congo</string>[m
[32m+[m[32m    <string name="Djibouti">Djibouti</string>[m
[32m+[m[32m    <string name="ElSalvador">El Salvador</string>[m
[32m+[m[32m    <string name="EquatorialGuinea">Equatorial Guinea</string>[m
[32m+[m[32m    <string name="Eswatini">Eswatini</string>[m
[32m+[m[32m    <string name="Fiji">Fiji</string>[m
[32m+[m[32m    <string name="Gabon">Gabon</string>[m
[32m+[m[32m    <string name="Grenada">Grenada</string>[m
[32m+[m[32m    <string name="GuineaBissau">Guinea-Bissau</string>[m
[32m+[m[32m    <string name="Kenya">Kenya</string>[m
[32m+[m[32m    <string name="Kiribati">Kiribati</string>[m
[32m+[m[32m    <string name="Kuwait">Kuwait</string>[m
[32m+[m[32m    <string name="LaoRepublic">Lao Republic</string>[m
[32m+[m[32m    <string name="Lesotho">Lesotho</string>[m
[32m+[m[32m    <string name="Liberia">Liberia</string>[m
[32m+[m[32m    <string name="Libya">Libya</string>[m
[32m+[m[32m    <string name="Lithuania">Lithuania</string>[m
[32m+[m[32m    <string name="Malawi">Malawi</string>[m
[32m+[m[32m    <string name="Mali">Mali</string>[m
[32m+[m[32m    <string name="Mauritania">Mauritania</string>[m
[32m+[m[32m    <string name="Mauritius">Mauritius</string>[m
[32m+[m[32m    <string name="Micronesia">Micronesia</string>[m
[32m+[m[32m    <string name="MoldovaRepublic">Moldova Republic </string>[m
[32m+[m[32m    <string name="Monaco">Monaco</string>[m
[32m+[m[32m    <string name="Montenegro">Montenegro</string>[m
[32m+[m[32m    <string name="Morocco">Morocco</string>[m
[32m+[m[32m    <string name="Mozambique">Mozambique</string>[m
[32m+[m[32m    <string name="Myanmar">Myanmar</string>[m
[32m+[m[32m    <string name="Nepal">Nepal</string>[m
[32m+[m[32m    <string name="Nicaragua">Nicaragua</string>[m
[32m+[m[32m    <string name="Niger">Niger</string>[m
[32m+[m[32m    <string name="NorthMacedonia">North Macedonia</string>[m
[32m+[m[32m    <string name="Norway">Norway</string>[m
[32m+[m[32m    <string name="Palau">Palau</string>[m
[32m+[m[32m    <string name="PapuaNewGuinea">Papua New Guinea</string>[m
[32m+[m[32m    <string name="Philippines">Philippines</string>[m
[32m+[m[32m    <string name="Rwanda">Rwanda</string>[m
[32m+[m[32m    <string name="SaintKittsandNevis">Saint Kitts and Nevis</string>[m
[32m+[m[32m    <string name="SaintLucia">Saint Lucia</string>[m
[32m+[m[32m    <string name="SaintVincentandtheGrenadines">Saint Vincent and the Grenadines</string>[m
[32m+[m[32m    <string name="Samoa">Samoa</string>[m
[32m+[m[32m    <string name="SanMarino">San Marino</string>[m
[32m+[m[32m    <string name="SaoTomeandPrincipe">Sao Tome and Principe</string>[m
[32m+[m[32m    <string name="Serbia">Serbia</string>[m
[32m+[m[32m    <string name="Seychelles">Seychelles</string>[m
[32m+[m[32m    <string name="SierraLeone">Sierra Leone</string>[m
[32m+[m[32m    <string name="SolomonIslands">Solomon Islands</string>[m
[32m+[m[32m    <string name="Somalia">Somalia</string>[m
[32m+[m[32m    <string name="SouthSudan">South Sudan</string>[m
[32m+[m[32m    <string name="Suriname">Suriname</string>[m
[32m+[m[32m    <string name="Tajikistan">Tajikistan</string>[m
[32m+[m[32m    <string name="TimorLeste">Timor-Leste</string>[m
[32m+[m[32m    <string name="Togo">Togo</string>[m
[32m+[m[32m    <string name="Tonga">Tonga</string>[m
[32m+[m[32m    <string name="TrinidadandTobago">Trinidad and Tobago</string>[m
[32m+[m[32m    <string name="Tunisia">Tunisia</string>[m
[32m+[m[32m    <string name="Turkmenistan">Turkmenistan</string>[m
[32m+[m[32m    <string name="Tuvalu">Tuvalu</string>[m
[32m+[m[32m    <string name="Vanuatu">Vanuatu</string>[m
[32m+[m[32m    <string name="VietNam">Viet Nam</string>[m
[32m+[m[32m    <string name="Yemen">Yemen</string>[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32m</resources>[m
\ No newline at end of file[m
[1mdiff --git a/app/src/main/res/values/themes.xml b/app/src/main/res/values/themes.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..5378f3d[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/res/values/themes.xml[m
[36m@@ -0,0 +1,16 @@[m
[32m+[m[32m<resources xmlns:tools="http://schemas.android.com/tools">[m
[32m+[m[32m    <!-- Base application theme. -->[m
[32m+[m[32m    <style name="Theme.FunWithFlags" parent="Theme.MaterialComponents.DayNight.DarkActionBar">[m
[32m+[m[32m        <!-- Primary brand color. -->[m
[32m+[m[32m        <item name="colorPrimary">@color/yellow</item>[m
[32m+[m[32m        <item name="colorPrimaryVariant">@color/yellow</item>[m
[32m+[m[32m        <item name="colorOnPrimary">@color/white</item>[m
[32m+[m[32m        <!-- Secondary brand color. -->[m
[32m+[m[32m        <item name="colorSecondary">@color/teal_200</item>[m
[32m+[m[32m        <item name="colorSecondaryVariant">@color/teal_700</item>[m
[32m+[m[32m        <item name="colorOnSecondary">@color/black</item>[m
[32m+[m[32m        <!-- Status bar color. -->[m
[32m+[m[32m        <item name="android:statusBarColor" tools:targetApi="l">?attr/colorPrimaryVariant</item>[m
[32m+[m[32m        <!-- Customize your theme here. -->[m
[32m+[m[32m    </style>[m
[32m+[m[32m</resources>[m
\ No newline at end of file[m
[1mdiff --git a/app/src/test/java/com/example/funwithflags/ExampleUnitTest.java b/app/src/test/java/com/example/funwithflags/ExampleUnitTest.java[m
[1mnew file mode 100644[m
[1mindex 0000000..4d168e1[m
[1m--- /dev/null[m
[1m+++ b/app/src/test/java/com/example/funwithflags/ExampleUnitTest.java[m
[36m@@ -0,0 +1,17 @@[m
[32m+[m[32mpackage com.example.funwithflags;[m
[32m+[m
[32m+[m[32mimport org.junit.Test;[m
[32m+[m
[32m+[m[32mimport static org.junit.Assert.*;[m
[32m+[m
[32m+[m[32m/**[m
[32m+[m[32m * Example local unit test, which will execute on the development machine (host).[m
[32m+[m[32m *[m
[32m+[m[32m * @see <a href="http://d.android.com/tools/testing">Testing documentation</a>[m
[32m+[m[32m */[m
[32m+[m[32mpublic class ExampleUnitTest {[m
[32m+[m[32m    @Test[m
[32m+[m[32m    public void addition_isCorrect() {[m
[32m+[m[32m        assertEquals(4, 2 + 2);[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/build.gradle b/build.gradle[m
[1mnew file mode 100644[m
[1mindex 0000000..2106b82[m
[1m--- /dev/null[m
[1m+++ b/build.gradle[m
[36m@@ -0,0 +1,17 @@[m
[32m+[m[32m// Top-level build file where you can add configuration options common to all sub-projects/modules.[m
[32m+[m[32mbuildscript {[m
[32m+[m[32m    repositories {[m
[32m+[m[32m        google()[m
[32m+[m[32m        mavenCentral()[m
[32m+[m[32m    }[m
[32m+[m[32m    dependencies {[m
[32m+[m[32m        classpath "com.android.tools.build:gradle:7.0.2"[m
[32m+[m
[32m+[m[32m        // NOTE: Do not place your application dependencies here; they belong[m
[32m+[m[32m        // in the individual module build.gradle files[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mtask clean(type: Delete) {[m
[32m+[m[32m    delete rootProject.buildDir[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/gradle.properties b/gradle.properties[m
[1mnew file mode 100644[m
[1mindex 0000000..52f5917[m
[1m--- /dev/null[m
[1m+++ b/gradle.properties[m
[36m@@ -0,0 +1,19 @@[m
[32m+[m[32m# Project-wide Gradle settings.[m
[32m+[m[32m# IDE (e.g. Android Studio) users:[m
[32m+[m[32m# Gradle settings configured through the IDE *will override*[m
[32m+[m[32m# any settings specified in this file.[m
[32m+[m[32m# For more details on how to configure your build environment visit[m
[32m+[m[32m# http://www.gradle.org/docs/current/userguide/build_environment.html[m
[32m+[m[32m# Specifies the JVM arguments used for the daemon process.[m
[32m+[m[32m# The setting is particularly useful for tweaking memory settings.[m
[32m+[m[32morg.gradle.jvmargs=-Xmx2048m -Dfile.encoding=UTF-8[m
[32m+[m[32m# When configured, Gradle will run in incubating parallel mode.[m
[32m+[m[32m# This option should only be used with decoupled projects. More details, visit[m
[32m+[m[32m# http://www.gradle.org/docs/current/userguide/multi_project_builds.html#sec:decoupled_projects[m
[32m+[m[32m# org.gradle.parallel=true[m
[32m+[m[32m# AndroidX package structure to make it clearer which packages are bundled with the[m
[32m+[m[32m# Android operating system, and which are packaged with your app"s APK[m
[32m+[m[32m# https://developer.android.com/topic/libraries/support-library/androidx-rn[m
[32m+[m[32mandroid.useAndroidX=true[m
[32m+[m[32m# Automatically convert third-party libraries to use AndroidX[m
[32m+[m[32mandroid.enableJetifier=true[m
\ No newline at end of file[m
[1mdiff --git a/gradle/wrapper/gradle-wrapper.jar b/gradle/wrapper/gradle-wrapper.jar[m
[1mnew file mode 100644[m
[1mindex 0000000..e708b1c[m
Binary files /dev/null and b/gradle/wrapper/gradle-wrapper.jar differ
[1mdiff --git a/gradle/wrapper/gradle-wrapper.properties b/gradle/wrapper/gradle-wrapper.properties[m
[1mnew file mode 100644[m
[1mindex 0000000..ca95d51[m
[1m--- /dev/null[m
[1m+++ b/gradle/wrapper/gradle-wrapper.properties[m
[36m@@ -0,0 +1,6 @@[m
[32m+[m[32m#Tue Sep 21 10:26:32 IDT 2021[m
[32m+[m[32mdistributionBase=GRADLE_USER_HOME[m
[32m+[m[32mdistributionUrl=https\://services.gradle.org/distributions/gradle-7.0.2-bin.zip[m
[32m+[m[32mdistributionPath=wrapper/dists[m
[32m+[m[32mzipStorePath=wrapper/dists[m
[32m+[m[32mzipStoreBase=GRADLE_USER_HOME[m
[1mdiff --git a/gradlew b/gradlew[m
[1mnew file mode 100644[m
[1mindex 0000000..4f906e0[m
[1m--- /dev/null[m
[1m+++ b/gradlew[m
[36m@@ -0,0 +1,185 @@[m
[32m+[m[32m#!/usr/bin/env sh[m
[32m+[m
[32m+[m[32m#[m
[32m+[m[32m# Copyright 2015 the original author or authors.[m
[32m+[m[32m#[m
[32m+[m[32m# Licensed under the Apache License, Version 2.0 (the "License");[m
[32m+[m[32m# you may not use this file except in compliance with the License.[m
[32m+[m[32m# You may obtain a copy of the License at[m
[32m+[m[32m#[m
[32m+[m[32m#      https://www.apache.org/licenses/LICENSE-2.0[m
[32m+[m[32m#[m
[32m+[m[32m# Unless required by applicable law or agreed to in writing, software[m
[32m+[m[32m# distributed under the License is distributed on an "AS IS" BASIS,[m
[32m+[m[32m# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.[m
[32m+[m[32m# See the License for the specific language governing permissions and[m
[32m+[m[32m# limitations under the License.[m
[32m+[m[32m#[m
[32m+[m
[32m+[m[32m##############################################################################[m
[32m+[m[32m##[m
[32m+[m[32m##  Gradle start up script for UN*X[m
[32m+[m[32m##[m
[32m+[m[32m##############################################################################[m
[32m+[m
[32m+[m[32m# Attempt to set APP_HOME[m
[32m+[m[32m# Resolve links: $0 may be a link[m
[32m+[m[32mPRG="$0"[m
[32m+[m[32m# Need this for relative symlinks.[m
[32m+[m[32mwhile [ -h "$PRG" ] ; do[m
[32m+[m[32m    ls=`ls -ld "$PRG"`[m
[32m+[m[32m    link=`expr "$ls" : '.*-> \(.*\)$'`[m
[32m+[m[32m    if expr "$link" : '/.*' > /dev/null; then[m
[32m+[m[32m        PRG="$link"[m
[32m+[m[32m    else[m
[32m+[m[32m        PRG=`dirname "$PRG"`"/$link"[m
[32m+[m[32m    fi[m
[32m+[m[32mdone[m
[32m+[m[32mSAVED="`pwd`"[m
[32m+[m[32mcd "`dirname \"$PRG\"`/" >/dev/null[m
[32m+[m[32mAPP_HOME="`pwd -P`"[m
[32m+[m[32mcd "$SAVED" >/dev/null[m
[32m+[m
[32m+[m[32mAPP_NAME="Gradle"[m
[32m+[m[32mAPP_BASE_NAME=`basename "$0"`[m
[32m+[m
[32m+[m[32m# Add default JVM options here. You can also use JAVA_OPTS and GRADLE_OPTS to pass JVM options to this script.[m
[32m+[m[32mDEFAULT_JVM_OPTS='"-Xmx64m" "-Xms64m"'[m
[32m+[m
[32m+[m[32m# Use the maximum available, or set MAX_FD != -1 to use that value.[m
[32m+[m[32mMAX_FD="maximum"[m
[32m+[m
[32m+[m[32mwarn () {[m
[32m+[m[32m    echo "$*"[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mdie () {[m
[32m+[m[32m    echo[m
[32m+[m[32m    echo "$*"[m
[32m+[m[32m    echo[m
[32m+[m[32m    exit 1[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m# OS specific support (must be 'true' or 'false').[m
[32m+[m[32mcygwin=false[m
[32m+[m[32mmsys=false[m
[32m+[m[32mdarwin=false[m
[32m+[m[32mnonstop=false[m
[32m+[m[32mcase "`uname`" in[m
[32m+[m[32m  CYGWIN* )[m
[32m+[m[32m    cygwin=true[m
[32m+[m[32m    ;;[m
[32m+[m[32m  Darwin* )[m
[32m+[m[32m    darwin=true[m
[32m+[m[32m    ;;[m
[32m+[m[32m  MINGW* )[m
[32m+[m[32m    msys=true[m
[32m+[m[32m    ;;[m
[32m+[m[32m  NONSTOP* )[m
[32m+[m[32m    nonstop=true[m
[32m+[m[32m    ;;[m
[32m+[m[32mesac[m
[32m+[m
[32m+[m[32mCLASSPATH=$APP_HOME/gradle/wrapper/gradle-wrapper.jar[m
[32m+[m
[32m+[m
[32m+[m[32m# Determine the Java command to use to start the JVM.[m
[32m+[m[32mif [ -n "$JAVA_HOME" ] ; then[m
[32m+[m[32m    if [ -x "$JAVA_HOME/jre/sh/java" ] ; then[m
[32m+[m[32m        # IBM's JDK on AIX uses strange locations for the executables[m
[32m+[m[32m        JAVACMD="$JAVA_HOME/jre/sh/java"[m
[32m+[m[32m    else[m
[32m+[m[32m        JAVACMD="$JAVA_HOME/bin/java"[m
[32m+[m[32m    fi[m
[32m+[m[32m    if [ ! -x "$JAVACMD" ] ; then[m
[32m+[m[32m        die "ERROR: JAVA_HOME is set to an invalid directory: $JAVA_HOME[m
[32m+[m
[32m+[m[32mPlease set the JAVA_HOME variable in your environment to match the[m
[32m+[m[32mlocation of your Java installation."[m
[32m+[m[32m    fi[m
[32m+[m[32melse[m
[32m+[m[32m    JAVACMD="java"[m
[32m+[m[32m    which java >/dev/null 2>&1 || die "ERROR: JAVA_HOME is not set and no 'java' command could be found in your PATH.[m
[32m+[m
[32m+[m[32mPlease set the JAVA_HOME variable in your environment to match the[m
[32m+[m[32mlocation of your Java installation."[m
[32m+[m[32mfi[m
[32m+[m
[32m+[m[32m# Increase the maximum file descriptors if we can.[m
[32m+[m[32mif [ "$cygwin" = "false" -a "$darwin" = "false" -a "$nonstop" = "false" ] ; then[m
[32m+[m[32m    MAX_FD_LIMIT=`ulimit -H -n`[m
[32m+[m[32m    if [ $? -eq 0 ] ; then[m
[32m+[m[32m        if [ "$MAX_FD" = "maximum" -o "$MAX_FD" = "max" ] ; then[m
[32m+[m[32m            MAX_FD="$MAX_FD_LIMIT"[m
[32m+[m[32m        fi[m
[32m+[m[32m        ulimit -n $MAX_FD[m
[32m+[m[32m        if [ $? -ne 0 ] ; then[m
[32m+[m[32m            warn "Could not set maximum file descriptor limit: $MAX_FD"[m
[32m+[m[32m        fi[m
[32m+[m[32m    else[m
[32m+[m[32m        warn "Could not query maximum file descriptor limit: $MAX_FD_LIMIT"[m
[32m+[m[32m    fi[m
[32m+[m[32mfi[m
[32m+[m
[32m+[m[32m# For Darwin, add options to specify how the application appears in the dock[m
[32m+[m[32mif $darwin; then[m
[32m+[m[32m    GRADLE_OPTS="$GRADLE_OPTS \"-Xdock:name=$APP_NAME\" \"-Xdock:icon=$APP_HOME/media/gradle.icns\""[m
[32m+[m[32mfi[m
[32m+[m
[32m+[m[32m# For Cygwin or MSYS, switch paths to Windows format before running java[m
[32m+[m[32mif [ "$cygwin" = "true" -o "$msys" = "true" ] ; then[m
[32m+[m[32m    APP_HOME=`cygpath --path --mixed "$APP_HOME"`[m
[32m+[m[32m    CLASSPATH=`cygpath --path --mixed "$CLASSPATH"`[m
[32m+[m
[32m+[m[32m    JAVACMD=`cygpath --unix "$JAVACMD"`[m
[32m+[m
[32m+[m[32m    # We build the pattern for arguments to be converted via cygpath[m
[32m+[m[32m    ROOTDIRSRAW=`find -L / -maxdepth 1 -mindepth 1 -type d 2>/dev/null`[m
[32m+[m[32m    SEP=""[m
[32m+[m[32m    for dir in $ROOTDIRSRAW ; do[m
[32m+[m[32m        ROOTDIRS="$ROOTDIRS$SEP$dir"[m
[32m+[m[32m        SEP="|"[m
[32m+[m[32m    done[m
[32m+[m[32m    OURCYGPATTERN="(^($ROOTDIRS))"[m
[32m+[m[32m    # Add a user-defined pattern to the cygpath arguments[m
[32m+[m[32m    if [ "$GRADLE_CYGPATTERN" != "" ] ; then[m
[32m+[m[32m        OURCYGPATTERN="$OURCYGPATTERN|($GRADLE_CYGPATTERN)"[m
[32m+[m[32m    fi[m
[32m+[m[32m    # Now convert the arguments - kludge to limit ourselves to /bin/sh[m
[32m+[m[32m    i=0[m
[32m+[m[32m    for arg in "$@" ; do[m
[32m+[m[32m        CHECK=`echo "$arg"|egrep -c "$OURCYGPATTERN" -`[m
[32m+[m[32m        CHECK2=`echo "$arg"|egrep -c "^-"`                                 ### Determine if an option[m
[32m+[m
[32m+[m[32m        if [ $CHECK -ne 0 ] && [ $CHECK2 -eq 0 ] ; then                    ### Added a condition[m
[32m+[m[32m            eval `echo args$i`=`cygpath --path --ignore --mixed "$arg"`[m
[32m+[m[32m        else[m
[32m+[m[32m            eval `echo args$i`="\"$arg\""[m
[32m+[m[32m        fi[m
[32m+[m[32m        i=`expr $i + 1`[m
[32m+[m[32m    done[m
[32m+[m[32m    case $i in[m
[32m+[m[32m        0) set -- ;;[m
[32m+[m[32m        1) set -- "$args0" ;;[m
[32m+[m[32m        2) set -- "$args0" "$args1" ;;[m
[32m+[m[32m        3) set -- "$args0" "$args1" "$args2" ;;[m
[32m+[m[32m        4) set -- "$args0" "$args1" "$args2" "$args3" ;;[m
[32m+[m[32m        5) set -- "$args0" "$args1" "$args2" "$args3" "$args4" ;;[m
[32m+[m[32m        6) set -- "$args0" "$args1" "$args2" "$args3" "$args4" "$args5" ;;[m
[32m+[m[32m        7) set -- "$args0" "$args1" "$args2" "$args3" "$args4" "$args5" "$args6" ;;[m
[32m+[m[32m        8) set -- "$args0" "$args1" "$args2" "$args3" "$args4" "$args5" "$args6" "$args7" ;;[m
[32m+[m[32m        9) set -- "$args0" "$args1" "$args2" "$args3" "$args4" "$args5" "$args6" "$args7" "$args8" ;;[m
[32m+[m[32m    esac[m
[32m+[m[32mfi[m
[32m+[m
[32m+[m[32m# Escape application args[m
[32m+[m[32msave () {[m
[32m+[m[32m    for i do printf %s\\n "$i" | sed "s/'/'\\\\''/g;1s/^/'/;\$s/\$/' \\\\/" ; done[m
[32m+[m[32m    echo " "[m
[32m+[m[32m}[m
[32m+[m[32mAPP_ARGS=`save "$@"`[m
[32m+[m
[32m+[m[32m# Collect all arguments for the java command, following the shell quoting and substitution rules[m
[32m+[m[32meval set -- $DEFAULT_JVM_OPTS $JAVA_OPTS $GRADLE_OPTS "\"-Dorg.gradle.appname=$APP_BASE_NAME\"" -classpath "\"$CLASSPATH\"" org.gradle.wrapper.GradleWrapperMain "$APP_ARGS"[m
[32m+[m
[32m+[m[32mexec "$JAVACMD" "$@"[m
[1mdiff --git a/gradlew.bat b/gradlew.bat[m
[1mnew file mode 100644[m
[1mindex 0000000..107acd3[m
[1m--- /dev/null[m
[1m+++ b/gradlew.bat[m
[36m@@ -0,0 +1,89 @@[m
[32m+[m[32m@rem[m
[32m+[m[32m@rem Copyright 2015 the original author or authors.[m
[32m+[m[32m@rem[m
[32m+[m[32m@rem Licensed under the Apache License, Version 2.0 (the "License");[m
[32m+[m[32m@rem you may not use this file except in compliance with the License.[m
[32m+[m[32m@rem You may obtain a copy of the License at[m
[32m+[m[32m@rem[m
[32m+[m[32m@rem      https://www.apache.org/licenses/LICENSE-2.0[m
[32m+[m[32m@rem[m
[32m+[m[32m@rem Unless required by applicable law or agreed to in writing, software[m
[32m+[m[32m@rem distributed under the License is distributed on an "AS IS" BASIS,[m
[32m+[m[32m@rem WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.[m
[32m+[m[32m@rem See the License for the specific language governing permissions and[m
[32m+[m[32m@rem limitations under the License.[m
[32m+[m[32m@rem[m
[32m+[m
[32m+[m[32m@if "%DEBUG%" == "" @echo off[m
[32m+[m[32m@rem ##########################################################################[m
[32m+[m[32m@rem[m
[32m+[m[32m@rem  Gradle startup script for Windows[m
[32m+[m[32m@rem[m
[32m+[m[32m@rem ##########################################################################[m
[32m+[m
[32m+[m[32m@rem Set local scope for the variables with windows NT shell[m
[32m+[m[32mif "%OS%"=="Windows_NT" setlocal[m
[32m+[m
[32m+[m[32mset DIRNAME=%~dp0[m
[32m+[m[32mif "%DIRNAME%" == "" set DIRNAME=.[m
[32m+[m[32mset APP_BASE_NAME=%~n0[m
[32m+[m[32mset APP_HOME=%DIRNAME%[m
[32m+[m
[32m+[m[32m@rem Resolve any "." and ".." in APP_HOME to make it shorter.[m
[32m+[m[32mfor %%i in ("%APP_HOME%") do set APP_HOME=%%~fi[m
[32m+[m
[32m+[m[32m@rem Add default JVM options here. You can also use JAVA_OPTS and GRADLE_OPTS to pass JVM options to this script.[m
[32m+[m[32mset DEFAULT_JVM_OPTS="-Xmx64m" "-Xms64m"[m
[32m+[m
[32m+[m[32m@rem Find java.exe[m
[32m+[m[32mif defined JAVA_HOME goto findJavaFromJavaHome[m
[32m+[m
[32m+[m[32mset JAVA_EXE=java.exe[m
[32m+[m[32m%JAVA_EXE% -version >NUL 2>&1[m
[32m+[m[32mif "%ERRORLEVEL%" == "0" goto execute[m
[32m+[m
[32m+[m[32mecho.[m
[32m+[m[32mecho ERROR: JAVA_HOME is not set and no 'java' command could be found in your PATH.[m
[32m+[m[32mecho.[m
[32m+[m[32mecho Please set the JAVA_HOME variable in your environment to match the[m
[32m+[m[32mecho location of your Java installation.[m
[32m+[m
[32m+[m[32mgoto fail[m
[32m+[m
[32m+[m[32m:findJavaFromJavaHome[m
[32m+[m[32mset JAVA_HOME=%JAVA_HOME:"=%[m
[32m+[m[32mset JAVA_EXE=%JAVA_HOME%/bin/java.exe[m
[32m+[m
[32m+[m[32mif exist "%JAVA_EXE%" goto execute[m
[32m+[m
[32m+[m[32mecho.[m
[32m+[m[32mecho ERROR: JAVA_HOME is set to an invalid directory: %JAVA_HOME%[m
[32m+[m[32mecho.[m
[32m+[m[32mecho Please set the JAVA_HOME variable in your environment to match the[m
[32m+[m[32mecho location of your Java installation.[m
[32m+[m
[32m+[m[32mgoto fail[m
[32m+[m
[32m+[m[32m:execute[m
[32m+[m[32m@rem Setup the command line[m
[32m+[m
[32m+[m[32mset CLASSPATH=%APP_HOME%\gradle\wrapper\gradle-wrapper.jar[m
[32m+[m
[32m+[m
[32m+[m[32m@rem Execute Gradle[m
[32m+[m[32m"%JAVA_EXE%" %DEFAULT_JVM_OPTS% %JAVA_OPTS% %GRADLE_OPTS% "-Dorg.gradle.appname=%APP_BASE_NAME%" -classpath "%CLASSPATH%" org.gradle.wrapper.GradleWrapperMain %*[m
[32m+[m
[32m+[m[32m:end[m
[32m+[m[32m@rem End local scope for the variables with windows NT shell[m
[32m+[m[32mif "%ERRORLEVEL%"=="0" goto mainEnd[m
[32m+[m
[32m+[m[32m:fail[m
[32m+[m[32mrem Set variable GRADLE_EXIT_CONSOLE if you need the _script_ return code instead of[m
[32m+[m[32mrem the _cmd.exe /c_ return code![m
[32m+[m[32mif  not "" == "%GRADLE_EXIT_CONSOLE%" exit 1[m
[32m+[m[32mexit /b 1[m
[32m+[m
[32m+[m[32m:mainEnd[m
[32m+[m[32mif "%OS%"=="Windows_NT" endlocal[m
[32m+[m
[32m+[m[32m:omega[m
[1mdiff --git a/settings.gradle b/settings.gradle[m
[1mnew file mode 100644[m
[1mindex 0000000..4b00cbd[m
[1m--- /dev/null[m
[1m+++ b/settings.gradle[m
[36m@@ -0,0 +1,10 @@[m
[32m+[m[32mdependencyResolutionManagement {[m
[32m+[m[32m    repositoriesMode.set(RepositoriesMode.FAIL_ON_PROJECT_REPOS)[m
[32m+[m[32m    repositories {[m
[32m+[m[32m        google()[m
[32m+[m[32m        mavenCentral()[m
[32m+[m[32m        jcenter() // Warning: this repository is going to shut down soon[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[32m+[m[32mrootProject.name = "FunWithFlags"[m
[32m+[m[32minclude ':app'[m
