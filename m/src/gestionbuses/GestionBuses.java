/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package gestionbuses;

import java.util.List;
import logica.Boleto;
import logica.Bus;
import logica.Pasajero;
import logica.Ruta;
import persistencia.BoletoJpaController;
import persistencia.BusJpaController;
import persistencia.PasajeroJpaController;
import persistencia.RutaJpaController;

/**
 *
 * @author fabricio
 */
public class GestionBuses {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {

        /*Pasajero p = new Pasajero("0707303293", "Lisbeth", "Apolo");
        PasajeroJpaController controlador= new PasajeroJpaController();
        controlador.create(p);*/
 /*Bus b = new Bus("001", 35, "HP-786");
        BusJpaController controladorb= new BusJpaController();
        controladorb.create(b);*/
 /* Pasajero p = new Pasajero("0707303988", "Lucia", "Apolo");
        PasajeroJpaController controlador= new PasajeroJpaController();
        controlador.create(p);
        Bus bus = new Bus("001", 30, "ABC-122");
        BusJpaController controlador1 = new BusJpaController();
        controlador1.create(bus);
        
        Boleto b = new Boleto(1, "001", 13.1f, bus, p);
        BoletoJpaController controlador2= new BoletoJpaController();
        controlador2.create(b);*/
        
 
        /*Bus bus = new Bus("001", 30, "ABC-122");
        BusJpaController controlador1 = new BusJpaController();
        controlador1.create(bus);
        Bus b1 = controlador1.findBus("001");
        System.out.println("Bus Numero " + b1.getNumero() + " Asientos " + b1.getAsientos() + " Placa " + b1.getPlaca());*/
        
        Pasajero p = new Pasajero("070896111", "Fabricio", "Ruiz");
        PasajeroJpaController controlador= new PasajeroJpaController();
        controlador.create(p);
        
        
        Bus bus = new Bus("007", 30, "ABC-155");
        BusJpaController controlador1 = new BusJpaController();
        controlador1.create(bus);
        
        
        Boleto b = new Boleto(6, "007", 13.1f, bus, p);
        BoletoJpaController controlador2= new BoletoJpaController();
        controlador2.create(b);
       
        
        
        Ruta rut = new Ruta(5, "Ruta5", "Loja", "Quito");
        RutaJpaController controlador3= new RutaJpaController();
        controlador3.create(rut);
        
        
        RutaJpaController controller = new RutaJpaController();

        // Obtener la lista de rutas
        List<Ruta> rutas = controller.findRutaEntities();

        // Imprimir cada ruta
        for (Ruta ruta : rutas) {
            System.out.println("Nombre " + ruta.getNombre() + " Lugar de salida: " + ruta.getLugar_salida() + " Lugar de destino: " + ruta.getLugar_destino() );
        }
    }

}
