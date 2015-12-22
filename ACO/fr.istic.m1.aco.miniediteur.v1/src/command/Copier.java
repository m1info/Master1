package command;

import receiver.MoteurEditeurInterface;
import invoker.IhmInterface;


/**
 * Copier command concrete class
 */
public class Copier implements CommandeInterface {

	// Attributes
	private MoteurEditeurInterface moteur;
	private IhmInterface ihm;


	/**
	 * The constructor
	 * @param m The engine of this command
	 * @param i Its Ihm to interact with the user
	 */
	public Copier(MoteurEditeurInterface m, IhmInterface i) {
		this.moteur = m;
		this.ihm = i;
	}


	/**
	 * Execute the command
	 */
	public void execute() {

		// Execute the command on the engine from the text from the ihm
		this.moteur.copier();
	}

}