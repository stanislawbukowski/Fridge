#include "Present_objects.h"

Present_objects::Present_objects(QDialog *parent) : QDialog(parent)
{
	ui.setupUi(this);
	string str = "Nr: " + to_string(number);
	ui.label_3->setText(QString::fromStdString(str));

}

Present_objects::~Present_objects()
{
}

void Present_objects::present()
{
	int t = household_products[number]->type;
	if (number == 0)
	{
		ui.previous->setDisabled(true);
	}
	if (household_products.size() == 1)
	{
		ui.previous->setDisabled(true);
		ui.next->setDisabled(true);
	}
	switch (t)
	{
	case 1:
	{
		
		ui.graphicsView->setScene(&g_scene);
		Fridge *temp = new Fridge;
		temp = dynamic_cast<Fridge*>(household_products[number]);

		ui.label_4->setText(QString::fromStdString("Lodowka"));
		p_map.load(QString::fromStdString(temp->photo_path));
		g_scene.clear();
		g_scene.addPixmap(p_map.scaled(389, 279));
		ui.graphicsView->show();

		ui.first_head->setText(QString::fromStdString(temp->company));
		ui.second_head->setText(QString::number(temp->power));

		ui.third_text->setText("L.Polek:");
		ui.third_head->setText(QString::number(temp->max_shelf_number));

		ui.fourth_text->setText("Rozmiar polki:");
		ui.fourth_head->setText(QString::number(temp->shelf_size));

		ui.fourth_head->setVisible(true);
		ui.fourth_text->setVisible(true);
		ui.fifth_head->setVisible(false);
		ui.fifth_text->setVisible(false);
		ui.sixth_head->setVisible(false);
		ui.sixth_text->setVisible(false);
		ui.seventh_head->setVisible(false);
		ui.seventh_text->setVisible(false);


		break;
		}
		case 2:
		{
			ui.graphicsView->setScene(&g_scene);
			Washing_maschine *temp = new Washing_maschine;
			temp = dynamic_cast<Washing_maschine*>(household_products[number]);

			ui.label_4->setText(QString::fromStdString("Pralka"));
			p_map.load(QString::fromStdString(temp->photo_path));
			g_scene.clear();
			g_scene.addPixmap(p_map.scaled(389, 279));
			ui.graphicsView->show();

			ui.first_head->setText(QString::fromStdString(temp->company));
            ui.second_head->setText(QString::number(temp->power));

			ui.third_text->setText("Pojemnosc [l]:");
			ui.third_head->setText(QString::number(temp->capacity));  


			ui.fourth_head->setVisible(false);
			ui.fourth_text->setVisible(false);
			ui.fifth_head->setVisible(false);
			ui.fifth_text->setVisible(false);
			ui.sixth_head->setVisible(false);
			ui.sixth_text->setVisible(false);
			ui.seventh_head->setVisible(false);
			ui.seventh_text->setVisible(false);

			break;
		}
		case 3:
		{
			ui.graphicsView->setScene(&g_scene);
			Digital_fridge *temp = new Digital_fridge;
;           temp = dynamic_cast<Digital_fridge*>(household_products[number]);
			ui.label_4->setText(QString::fromStdString("Lodowka multimedialna"));

			p_map.load(QString::fromStdString(temp->photo_path));
			g_scene.clear();
			g_scene.addPixmap(p_map.scaled(389, 279));
			ui.graphicsView->show();

			ui.first_head->setText(QString::fromStdString(temp->company));
			ui.second_head->setText(QString::number(temp->power));

			ui.third_text->setText("L.Polek:");
			ui.third_head->setText(QString::number(temp->max_shelf_number));

			ui.fourth_text->setText("Rozmiar polki:");
			ui.fourth_head->setText(QString::number(temp->shelf_size));

			ui.fifth_text->setText("Wifi:");
			if (temp->wifi_connection == 1) { ui.fifth_head->setText("Wlaczone"); }
			else { ui.fifth_head->setText("Wylaczone"); }

			ui.sixth_text->setText("Bluetooh:");
			if (temp->bluetooth_connection == 1) { ui.sixth_head->setText("Wlaczone"); }
			else { ui.sixth_head->setText("Wylaczone"); }

			ui.seventh_text->setText("Moc glosnika:");
			ui.seventh_head->setText(QString::number(temp->speaker_power));

			ui.fourth_head->setVisible(true);
			ui.fourth_text->setVisible(true);
			ui.fifth_head->setVisible(true);
			ui.fifth_text->setVisible(true);
			ui.sixth_head->setVisible(true);
			ui.sixth_text->setVisible(true);
			ui.seventh_head->setVisible(true);
			ui.seventh_text->setVisible(true);

			break;
		}
		}
	
}
void Present_objects::back()
{
	this->destroy();
}
void Present_objects::next()
{
	ui.previous->setVisible(true);
	ui.previous->setEnabled(true);
	number++;
	string str = "Nr: " + to_string(number);
	ui.label_3->setText(QString::fromStdString(str));
	if (number +1 == household_products.size())
	ui.next->setDisabled(true);
	present();
}
void Present_objects::previous()
{
	ui.next->setVisible(true);
	ui.next->setEnabled(true);
	number--;
	string str = "Nr: " + to_string(number);
	ui.label_3->setText(QString::fromStdString(str));
	present();
}