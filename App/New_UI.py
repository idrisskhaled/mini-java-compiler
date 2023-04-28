import os
import subprocess
from PyQt6 import QtCore, QtGui, QtWidgets
from PyQt6.QtWidgets import QMainWindow


class UiMainWindow(QMainWindow):
    def __init__(self, MainWindow: QMainWindow):
        super(UiMainWindow, self).__init__()
        self.centralwidget = QtWidgets.QWidget(MainWindow)
        MainWindow.setFixedSize(706, 433)
        #MainWindow.setWindowIcon(QIcon("Images\App.jpg"))
        self.BackgroundWidget = QtWidgets.QWidget(self.centralwidget)
        self.MainWidget = QtWidgets.QWidget(self.centralwidget)

        self.MainWindow = MainWindow

        self.lineEdit = QtWidgets.QTextEdit(self.MainWidget)
        self.text_edit = QtWidgets.QTextEdit(self.MainWidget)

        self.setup_UI(MainWindow)
        self.setStyleSheets()

    def setup_UI(self, MainWindow: QMainWindow):
        MainWindow.setObjectName("MainWindow")
        MainWindow.resize(706, 450)
        MainWindow.setWindowTitle("Mini Java Compiler")
        self.centralwidget.setObjectName("centralwidget")
        MainWindow.setCentralWidget(self.centralwidget)


        QtCore.QMetaObject.connectSlotsByName(MainWindow)
        self.BackgroundWidget.setGeometry(QtCore.QRect(0, 0, 706, 433))
        self.BackgroundWidget.setObjectName("backwidget")

        self.lineEdit.setGeometry(QtCore.QRect(30, 40, 330, 350))
        font = QtGui.QFont()
        font.setPointSize(10)
        self.lineEdit.setFont(font)
        self.lineEdit.setObjectName("lineEdit")
        self.lineEdit.setPlaceholderText("Place your code here")
        font = QtGui.QFont()
        font.setPointSize(10)

        self.startButton = QtWidgets.QPushButton(self.MainWidget)
        self.startButton.setGeometry(QtCore.QRect(30, 10, 93, 25))
        self.startButton.setObjectName("pushButton")
        self.startButton.setText("Compile")
        self.startButton.setIcon(QtGui.QIcon("Images\settingsicon.png"))


        self.text_edit.setGeometry(QtCore.QRect(380, 40, 300, 350))
        self.text_edit.setObjectName("scrollArea")
        self.text_edit.setReadOnly(True)
        self.text_edit.setPlaceholderText("Compilation result")

        QtCore.QMetaObject.connectSlotsByName(MainWindow)
        self.startButton.clicked.connect(self.start)

        font = QtGui.QFont()
        font.setPointSize(10)



    def start(self):
        with open("input.java","w+") as input:
            input.write(self.lineEdit.toPlainText())

        os.system("a.exe < input.java 1>output.txt 2>error.txt")
        with open("output.txt", "r") as input_file:
            text = input_file.read()
            if text:
                self.text_edit.append("Compiled successfully ! \n")
                self.text_edit.append(text)
        with open("error.txt", "r") as error_file:
            text = error_file.read()
            if text:
                self.text_edit.append("Error !\n")
                self.text_edit.append(text)



    def setStyleSheets(self):
            self.MainWindow.setStyleSheet(".QPushButton {\n"
                                          "background-color: white; \n"
                                          "  color: black; \n"
                                          "  border: 2px solid grey;\n"
                                          "  text-align: center;\n"
                                          "  display: inline-block;\n"
                                          "}\n"
                                          ".QTextEdit {\n"
                                          "background-color: white; \n"
                                          "  color: black; \n"
                                          "  border: 2px solid grey;\n"
                                          "}\n"
                                          "")



            self.setStyleSheet(".QWidget{\n"
                               "background-color:red;\n"
                               ""
                               "}")
            self.BackgroundWidget.setStyleSheet(
                "background-image: url(Images//Background.png); background-repeat: no-repeat; background-position: center")
