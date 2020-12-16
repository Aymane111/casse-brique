
#include <std::vector>

class ball : public Objet {
		public: 
			ball(vector<int>* vitesse); 
			~~ball();
			vector<int> getVitesse();
		private : 
			vector<int> d_vitesse; 
}