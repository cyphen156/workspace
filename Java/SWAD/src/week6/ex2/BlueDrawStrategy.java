package week6.ex2;

import java.awt.Color;

public class BlueDrawStrategy extends DrawStrategy {
	@Override
	public void draw(Ball ball) {
		ball.setColor(Color.blue);
	}

}
