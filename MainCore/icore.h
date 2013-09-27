//interface for ICore 
//Startup() :void
//Update() :void
//Render() :void
//Shutdown() :void


class ICore
{
public:
	//starts the core interface
	void Startup(void);
	//updates the core interface
	void Update(void);
	//renders the core interface
	void Render(void);
	//shutdowns the core interface
	void Shutdown(void);
};

