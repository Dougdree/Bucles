/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package logica;
import java.io.Serializable;
import javax.persistence.Basic;
import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.Id;
import javax.persistence.JoinColumn;
import javax.persistence.ManyToMany;
import javax.persistence.ManyToOne;
import javax.persistence.OneToMany;
import javax.persistence.Table;

/**
 *
 * @author arelys
 */
@Entity
@Table(name="boleto")
public class Boleto implements Serializable {
    
    @Id
    @Column(name="id")
    private Integer id;
    
    @Basic
    @Column(name="n_asiento")
    private String n_asiento;
    
    @Basic
    @Column(name="precio")  
    private float precio;
    
    @ManyToOne
    @JoinColumn(name = "numero_bus", referencedColumnName = "numero")
    private Bus numero_bus;
    
    @ManyToOne
    @JoinColumn(name = "id_pasajero", referencedColumnName = "cedula")
    private Pasajero id_pasajero;

    public Boleto() {
    }

    public Boleto(Integer id, String n_asiento, float precio, Bus numero_bus, Pasajero id_pasajero) {
        this.id = id;
        this.n_asiento = n_asiento;
        this.precio = precio;
        this.numero_bus = numero_bus;
        this.id_pasajero = id_pasajero;
    }

    /**
     * @return the id
     */
    public Integer getId() {
        return id;
    }

    /**
     * @param id the id to set
     */
    public void setId(Integer id) {
        this.id = id;
    }

    /**
     * @return the n_asiento
     */
    public String getN_asiento() {
        return n_asiento;
    }

    /**
     * @param n_asiento the n_asiento to set
     */
    public void setN_asiento(String n_asiento) {
        this.n_asiento = n_asiento;
    }

    /**
     * @return the precio
     */
    public float getPrecio() {
        return precio;
    }

    /**
     * @param precio the precio to set
     */
    public void setPrecio(float precio) {
        this.precio = precio;
    }

    /**
     * @return the numero_bus
     */
    public Bus getNumero_bus() {
        return numero_bus;
    }

    /**
     * @param numero_bus the numero_bus to set
     */
    public void setNumero_bus(Bus numero_bus) {
        this.numero_bus = numero_bus;
    }

    /**
     * @return the id_pasajero
     */
    public Pasajero getId_pasajero() {
        return id_pasajero;
    }

    /**
     * @param id_pasajero the id_pasajero to set
     */
    public void setId_pasajero(Pasajero id_pasajero) {
        this.id_pasajero = id_pasajero;
    }

   
}
