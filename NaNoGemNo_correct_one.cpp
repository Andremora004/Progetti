//Andrea Moramarco
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<time.h>
#include<stdlib.h>
using namespace std;


int numero_casuale(int x)
{int n;
	
	n=0;
	while (n=x)
	srand(unsigned(time(NULL)));
	n=rand()%6;
	return n;
}


int festivo_casuale(int x)
{int n;
	
	n=0;
	while (n=x)
	srand(unsigned(time(NULL)));
	n=rand()%6;
	return n;
}


void giorno_normale(int&gp)
{int g, n;

	n=0;
	g=numero_casuale (gp);
	if (g == 1) cout<<"I got up at 6.00 and even though I looked like a zombie as always I ate a toast and took some food supplements. I had a coffee and did a few minutes of stretching and bending, I took a shower, brushed my teeth and went on my bicycle to go to work, like every day. During my lunch break at work I ate curry rice and boiled vegetables accompanied by fresh fruit. work at 4 pm I went for a run for about 45 minutes. When I got home I took a shower and ate some wholemeal crackers with prosciutto, it was 5 pm Finally for dinner I ate grilled chicken with broccoli and always ending up with fresh fruit. After eating I went to sleep but not before writing a page of this diary and brushing my teeth. "<<endl;
	else
		{if (g == 2) cout<<"I got up at 6.00 and drank a cup of lukewarm water with lemon and took some food supplements. I had a coffee and did a few minutes of stretching and bending, I took a shower, brushed my teeth and left by bicycle to go to work, like every day. During my lunch break at work I ate pasta with cherry tomatoes and pieces of grilled salmon accompanied by fresh fruit . I returned from work at 4 in the afternoon I went for a run for about 45 minutes. When I got home I took a shower and ate a yogurt, it was 5pm. Finally for dinner I ate a pork chop with grilled aubergines and for always finish some fresh fruit. After eating I went to sleep but not before writing a page of this diary and brushing my teeth. "<<endl;
		 else
			{if (g == 3) cout<<"I got up at 6.00 and drank a glass of juice and took some food supplements. I had a coffee and did a few minutes of stretching and push-ups, I did the shower, I brushed my teeth and went on my bicycle to go to work, like every day. During my lunch break at work I ate potato dumplings and a salad accompanied by fresh fruit. Returned from work at 4 pm I went running for about 45 minutes. When I got home I took a shower and ate an apple, it was 5pm. Finally at dinner I ate bresaola with parmesan flakes and always fresh fruit. I went to sleep but not before writing a page of this diary and brushing my teeth. "<< endl;
			 else
				{if (g == 4) cout<<"I got up at 6.00 and drank a squeeze of lemon and took some dietary supplements. I had a coffee and did a few minutes of stretching and push-ups, I took a shower, brushed my teeth and left on my bicycle to go to work, like every day. During my lunch break at work I ate sautéed zucchini and a piece of cheese accompanied by fresh fruit. Came back from work at 4 in the afternoon I went running for about 45 minutes. When I got home I took a shower and ate a banana, it was 5pm. Finally for dinner I ate grilled turkey with boiled potatoes and always fresh fruit. having eaten I went to sleep but not before writing a page of this diary and brushing my teeth. "<< endl;
		 		 else
					if (g == 5) cout<<"I got up at 6.00 and ate some wholemeal bread with lemon jam and took some food supplements. I had a coffee and did a few minutes of stretching and push-ups, I took a shower, brushed my teeth and left by bicycle to go to work, as every day. During my lunch break at work I ate pasta with garlic, oil and chilli and tomatoes accompanied by fresh fruit. at 4 pm I went for a run for about 45 minutes. When I got home I took a shower and ate some wholemeal crackers, it was 5 pm Finally for dinner I ate some steamed ravioli with what was left in the fridge with broccoli and always fresh fruit. After eating I went to sleep but not before writing a page of this diary and brushing my teeth. "<< endl;
	 				 else
					{cout<<"I got up at 6.00 and ate a 5-grain croissant with and took some dietary supplements. I had a coffee and did a few minutes of stretching and push-ups, took a shower, washed myself my teeth and I went on my bicycle to go to work, like every day. During my lunch break at work I ate rice with chicken and raw vegetables accompanied by fresh fruit. Back from work at 4 in the afternoon I went for a run for about 45 minutes. When I got home I took a shower and ate a food supplement, it was 5pm. Finally for dinner I ate a steak with salad and always fresh fruit. After eating I went to sleep but not before writing a page of this diary and brushing my teeth. "<< endl;}
				}
			}	
		}
}


void weekend (int&gp)
{int g;

	g=numero_casuale(gp);
	if (g == 1) cout<<"Today being a weekend day I slept very long, in fact I woke up at 7:30, but I continued with my morning workouts anyway, so I continued with stretching and push-ups . At breakfast I ate some fruit left over from the night before and a coffee to make me happier. I went out for lunch but I didn't eat much. Today I rested without training. In the evening I saw a movie with some friends, and I ate some unsalted popcorn, which sucked like the movie. Finally I went to sleep, but only after writing this diary page and brushing my teeth. "<< endl;
	else
		{if (g == 1) cout<<"Today being a weekend day I slept very long, in fact I woke up at 7:30, but I continued with my morning workouts anyway, so I continued with stretching and push-ups. At breakfast I ate some fruit left over from the night before and a coffee to make me happier. I went out for lunch but I didn't eat much. Today I rested without training. In the evening I saw a movie with some friends, and I ate some unsalted popcorn, which sucked like the movie. Finally I went to sleep, but only after writing this diary page and brushing my teeth. "<< endl;
		 else
			{if (g == 3) cout<<"Today being a public holiday I stayed in bed longer than I should, so I got up at 8:00, and skipped my morning workouts for today, however I ate some wholemeal bread and Coffee. For lunch I ate wholemeal pasta with tomato. In the afternoon I ran for 45 minutes and then I ate a dark chocolate snack. In the evening I ate a pork chop with boiled potatoes. Finally I went to sleep, but only after writing this diary page and brushing my teeth. "<< endl;
			 else
				{if (g == 4) cout<<"Today being a weekend day I slept very long, in fact I woke up at 7:30, but I continued with my morning workouts anyway, so I continued with the stretching and Push-ups. For breakfast I took some food supplements and coffee to make me feel happier. For lunch I went out to eat and I ate a lot, maybe too much. So to make up for it I did a nice intense workout. In the evening I saw a movie with some friends, and I ate some popcorn without salt. Finally I went to sleep, but only after writing this diary page and brushing my teeth. "<< endl;
		 		 else
					{if (g == 5) cout<<"Today even though it is a public holiday I always woke up at 6:00 and did my morning workouts. In the morning before breakfast I went for a light jog, and for breakfast I I ate an apple and a coffee. I ate gnocchi with pesto for lunch. In the afternoon I went for a walk with some friends, and when I got home I took a shower and a protein shake. In the evening I ate a piadina with tuna and mozzarella. Finally I went to sleep, but only after writing this diary page and brushing my teeth. "<< endl;
						 else
							{cout<<"Today even though it's a public holiday I always woke up at 6:00 but I didn't do my morning workouts. I had toast and coffee for breakfast. I had a salad with wholemeal bread for lunch . In the afternoon I took a walk in the park by myself, and when I got home I took a shower and ate hummus. In the evening I ate grilled salmon and mashed potatoes. Finally I went to sleep, but only after writing this diary page and brushing my teeth. "<< endl;}
					}
				}
			}
		}
}

int main()
{int i, w, gn;

    w=0;
    gn=0;
	cout << "Yesterday I looked in the mirror and I almost didn't recognize myself anymore, as soon as I saw my reflected image I exclaimed: <But who is this?>."<<endl<<"Until that moment I hadn't realized I realize how fat I was, until then I had deceived the truth with excuses such as: <But a jog is enough for me, eat less and I'll be thin as before>, "<<endl<<" but the reality is often disappointing. "<< endl<< "With all the courage I had in my body, I took the scale, covered with months of dust, and I weighed myself ... I AM 150 KG, unfortunately this is the truth." << endl << "By consulting me with a dietician we planned a diet for a whole year, he also suggested that I keep a diary for each day of the diet ... "<< endl <<" "<< endl;
	cout<<"Day 0"<<endl;
	cout<<"Today is the first of the year and also the first day of my diet. Since I come from all the lunches and dinners of the Christmas period, today I kept myself light, in the morning, before breakfast, I went to take a run, I noticed that I'm not the only one, in fact others are in a similar situation to mine, they too ate too much during the holidays. "<<endl<<" For breakfast I ate wholemeal bread with a coffee and a juice, this will be my breakfast for most of the year. "<<endl<<" At lunch I ran out of lentil leftovers from the day before, as food is not wasted, and wholemeal bread. "<<endl << "For dinner I ate a nice grilled chicken, and as a side dish some grilled vegetables."<<endl;;
	for (i=1; i<400; i++)
	{if (i == 105) cout<<"Easter day."<<endl<<"Today is Easter day and as is now tradition I ate some nice Easter eggs, even though I'm 35 years old. be considered a big day, in fact, in addition to the eggs, I went to my relatives for Easter lunch, and between Easter cakes, doves and cotechini, I think I gained about 2kg :( ... but at least I enjoyed it . "<<endl<<" In the evening instead of eating I did a double training session. "<< endl <<" Back home, after taking a shower I fell asleep on the sofa with my bathrobe still on, so I was tired, but I still found the strength to write to write this diary page. "<< endl;
	 else
		{if (i == 304) cout<<"Halloween day."<<endl<<"Today is Halloween day and as is now tradition I went trick or treating, even though I'm 35 years old. be considered a big day, in addition to the sweets, in fact, I went to my relatives for lunch, and among cakes, stews and cotechini, I think I gained about 2kg :( ... but at least I enjoyed it. "<<endl<<"In the afternoon instead of eating I did a double training session in anticipation of all the sweets I would eat in the evening" << endl << "Back home, after taking a shower I fell asleep on the sofa with still wearing the bathrobe, I was so tired, but I still found the strength to write to write this page of the diary. "<< endl;
		 else
			{if (i == 359) cout<<"Christmas day."<<endl<<"Today is Christmas day and as is now tradition I opened the gifts that came to me from Santa Claus, even though I am 35 This can be considered a big day, in fact, in addition to Pandoro and Panettone, I went to my relatives for Christmas lunch, and between logs, pasta and cotechini, I think I gained about 3kg :( .. . but at least I enjoyed it. "<<endl<<" In the evening instead of eating I did a double training session. "<< endl <<" Back home, after taking a shower I fell asleep on the sofa with still on the bathrobe, I was so tired, but I still found the strength to write to write this page of the diary. "<< endl;
			 else
				{if (i == 323) cout<<"Birthday Day"<<endl<<"Today is my birthday and as is now tradition I have organized a nice evening with some of my friends, now I'm 36 years old. This can be considered a big day, in fact, in addition to the party with friends, I went to my relatives for lunch, and between cakes, chips, beers and cotechini, I think I gained about 2kg :( ... but at least I had fun. "<<endl<<" In the afternoon instead of eating I did a double training session in anticipation of everything I would eat in the evening "<< endl <<" Back home, after taking a shower I I fell asleep on the sofa still wearing the bathrobe, I was so tired, but I still found the strength to write this page of the diary. "<< endl;
				 else
					{if (i==6 || i==13 || i==20 || i==27 || i==34 || i==41 || i==48 || i==55 || i==62 || i==69 || i==76 || i==83 || i==90 || i==97 || i==104 || i==111 || i==118 || i==125 || i==132 || i==139 || i==146 || i==153 || i==160 || i==167 || i==174 || i==181 || i==188 || i==195 || i==202 || i==209 || i==216 || i==223 || i==230 || i==237 || i==244 || i==251 || i==258 || i==265 || i==272 || i==279 || i==286 || i==293 || i==300 || i==307 || i==314 || i==321 || i==328 || i==335|| i==342 || i==349 || i==356|| i==363)
					    {cout<<"Day "<<i<<endl;
					    weekend(w);}
					else
						{if (i==7 || i==14 || i==21 || i==28 || i==35 || i==42 || i==49 || i==56 || i==63 || i==70 || i==77 || i==84 || i==91 || i==98 || i==105 || i==115 || i==119 || i==126 || i==133 || i==140 || i==147 || i==154 || i==161 || i==168 || i==175 || i==182 || i==189 || i==196 || i==203 || i==210 || i==217 || i==224 || i==231 || i==238 || i==245 || i==252 || i==259 || i==266 || i==273 || i==280 || i==287 || i==294 || i==301 || i==308 || i==315 || i==322 || i==329 || i==336 || i==343 || i==350 || i==357 || i==364 )
						    {cout<<"Day "<<i<<endl;
							weekend(w);} 
						 else
							{if (i == 365) cout<<"New Year's Day."<<endl<<"Today is New Year's Eve and in tlast day of the diary and as is now tradition I went to the cinema to see a good anime film, even if I 36 years old. This can be considered a big day off, in fact it is the last day of the diet, so I let myself go a bit, and between cocktails, beers and chips, I think I gained about 1kg :( .. . but at least I enjoyed it. "<< endl <<" In the afternoon I did a training session in anticipation of everything I would eat in the evening "<< endl <<" Back home, after taking a shower I I am sitting on the sofa still wearing the bathrobe, and I have drawn conclusions about the past year, thanks to my determination I have managed to bring the good intentions of last year up to now, and I have come to weigh 60KG, I feel like a person new. I feel like myself again. At last I will be able to do things that before due to my weight were forbidden to me. I want to publish this story to motivate all those who are in the same situation as it was a year ago. If I did it, anyone can do it. However, since this diet is now part of my vision I decided to continue it until Valentine's Day and obviously I will continue to write a diary page a day"<< endl;
							 else 
							 {cout<<"Day "<<i<<endl;
							 giorno_normale(gn);}
							}
						}
					}
				}
			}
		}	
	}
	cout<<"Today is Valentine's Day and therefore as already decided I will finish writing my diary but obviously I will continue my diet, but maybe with some more sweets, but I will always be careful not to eat too much, as it takes a lot of time, commitment and effort. to lose weight rather than to take it."<<endl;
	cout<<endl;
	cout<<"End"<<endl;
}
