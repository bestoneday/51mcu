extern int timer_for_delay;
void delay_ms(int _time);
void inter_timer0_ms(void) interrupt 1
{
	TH0=0xfc;
	TL0=0x18;

	timer_for_delay++;	
}