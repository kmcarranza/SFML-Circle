#include <SFML/Graphics.hpp>

int main()
{
    auto window = sf::RenderWindow(sf::VideoMode({1920u, 1080u}), "CMake SFML Project");
    window.setFramerateLimit(60);

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }
            //Draw Circle
            sf::CircleShape circle;
            circle.setRadius(50);

            // Fill Circle with Green
            circle.setFillColor(sf::Color::Green);
            window.draw(circle);
            window.display();
    }
}
