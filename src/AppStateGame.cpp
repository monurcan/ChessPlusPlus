#include "AppState.h"

namespace chesspp
{
    int AppStateGame::id() { return 1; }
	
    void AppStateGame::OnRender(sf::RenderWindow &display)
    {
        display.draw(sf::Sprite(TextureManager::getInstance().Load("../res/img/chessboard_640x640.png")));
    }

    
}