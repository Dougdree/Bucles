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
import javax.persistence.Table;

/**
 *
 * @author fabricio
 */
@Entity
@Table(name = "bus")
public class Bus implements Serializable {

    @Id
    @Column(name = "numero")
    private String numero;


    @Basic
    @Column(name = "asientos")
    private Integer asientos;

    @Basic
    @Column(name = "placa")
    private String placa;

    public Bus() {
    }

    public Bus(String numero, Integer asientos, String placa) {
        this.numero = numero;
        this.asientos = asientos;
        this.placa = placa;
    }

    /**
     * @return the numero
     */
    public String getNumero() {
        return numero;
    }

    /**
     * @param numero the numero to set
     */
    public void setNumero(String numero) {
        this.numero = numero;
    }

    /**
     * @return the asientos
     */
    public Integer getAsientos() {
        return asientos;
    }

    /**
     * @param asientos the asientos to set
     */
    public void setAsientos(Integer asientos) {
        this.asientos = asientos;
    }

    /**
     * @return the placa
     */
    public String getPlaca() {
        return placa;
    }

    /**
     * @param placa the placa to set
     */
    public void setPlaca(String placa) {
        this.placa = placa;
    }

    

}
