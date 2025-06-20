cmake_minimum_required(VERSION 3.5)

project(trainticketsystem VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(trainticketsystem
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        TrainSchedule.h
        Ticket.h
        Ticket.cpp
        TrainSchedule.cpp
        TicketManager.h
        FileManager.h
        Passworddialog.h
        Passworddialog.cpp
        PasswordDialog.ui
        resources.qrc
        UserManager.h
        UserManager.cpp
        RegisterDialog.h
        RegisterDialog.cpp
        RegisterDialog.ui
    )

else()
    if(ANDROID)
        add_library(trainticketsystem SHARED
            ${PROJECT_SOURCES}
        )
        # 在 find_package() 调用之后为 Android 定义属性
        # set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(trainticketsystem
            ${PROJECT_SOURCES}
        )
    endif()
endif()


target_link_libraries(trainticketsystem PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.trainticketsystem)
endif()
set_target_properties(trainticketsystem PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS trainticketsystem
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(trainticketsystem)
endif()
