#include "AnimationWindow.h"
#include "Emoji.h"


// Definer størrelse på vindu og emoji
constexpr int xmax = 1000;
constexpr int ymax = 600;
constexpr int emojiRadius = 50;

int main()
{

	const Point tl{100, 100};
	const string win_label{"Emoji factory"};
	AnimationWindow win{tl.x, tl.y, xmax, ymax, win_label};

	Point sentrum{xmax/2,ymax/2};

	// EmptyFace emptyFace(sentrum,emojiRadius);
	// emptyFace.draw(win);

	SmileyFace smileyFace(sentrum,emojiRadius);
	smileyFace.draw(win);

	SadFace sadFace({sentrum.x+2*emojiRadius,sentrum.y},emojiRadius);
	sadFace.draw(win);

	SuprisedFace suprisedFace({sentrum.x-2*emojiRadius,sentrum.y},emojiRadius);
	suprisedFace.draw(win);
	AngryFace angryFace({sentrum.x-2*emojiRadius,sentrum.y+2*emojiRadius},emojiRadius);
	angryFace.draw(win);

	win.wait_for_close();

	return 0;
}
