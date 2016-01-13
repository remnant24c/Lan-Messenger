// Lan Messenger
// Copyright (C) 2012 Faraz Fallahi <fffaraz@gmail.com>
// 
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Affero General Public License as
// published by the Free Software Foundation, either version 3 of the
// License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Affero General Public License for more details.
//
// You should have received a copy of the GNU Affero General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
// 

#include "dialogabout.h"
#include "ui_dialogabout.h"
#include "globaldef.h"

DialogAbout::DialogAbout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAbout)
{
    ui->setupUi(this);
    initContents();
}

DialogAbout::~DialogAbout()
{
    delete ui;
}

void DialogAbout::initContents(void)
{
    ui->lblAboutTitle->setText( tr("Lan Messenger ") + QString(LM_VERSION) );
    ui->lblMadeByPeople->setText(tr("Faraz Fallahi \n Kim, David (kr)"));
    ui->lblGithubAddr->setText(tr("<a href=github.com/fffaraz color=blue>github.com/fffaraz</a>"));
    ui->lblHomepage->setText(tr("<a href=www.frz.ir color=blue>www.frz.ir</a>"));
    ui->lblMailAddr->setText(tr("<a href=fffaraz@gmail.com color=blue>fffaraz@gmail.com</a>"));
}//initContents(void)
