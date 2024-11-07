#include "rectangle.h"

Rectangle::Rectangle() {

}

double Rectangle::getArea(){
    return width * height;
}

double Rectangle::getCircum(){
    return (2 * (width + height));
}

void Rectangle::setWidth(double uusiLeveys){
    width = uusiLeveys;
}

void Rectangle::setHeight(double uusiKorkeus){
    height = uusiKorkeus;
}
