/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package logica;

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
 * @author fabricio
 */
@Entity
@Table(name = "ruta_bus")
public class Ruta_Bus {

    @Id
    @Column(name = "id")
    private String id;

    @Basic
    @Column(name = "horario_salida")
    private String horario_salida;

    @Basic
    @Column(name = "horario_llegada")
    private String horario_llegada;

    @ManyToOne
    @JoinColumn(name = "id_bus", referencedColumnName = "numero")
    private Bus id_bus;

    @ManyToOne
    @JoinColumn(name = "id_ruta", referencedColumnName = "id")
    private Ruta id_ruta;

    public Ruta_Bus() {
    }

    public Ruta_Bus(String id, String horario_salida, String horario_llegada, Bus id_bus, Ruta id_ruta) {
        this.id = id;
        this.horario_salida = horario_salida;
        this.horario_llegada = horario_llegada;
        this.id_bus = id_bus;
        this.id_ruta = id_ruta;
    }

    /**
     * @return the id
     */
    public String getId() {
        return id;
    }

    /**
     * @param id the id to set
     */
    public void setId(String id) {
        this.id = id;
    }

    /**
     * @return the horario_salida
     */
    public String getHorario_salida() {
        return horario_salida;
    }

    /**
     * @param horario_salida the horario_salida to set
     */
    public void setHorario_salida(String horario_salida) {
        this.horario_salida = horario_salida;
    }

    /**
     * @return the horario_llegada
     */
    public String getHorario_llegada() {
        return horario_llegada;
    }

    /**
     * @param horario_llegada the horario_llegada to set
     */
    public void setHorario_llegada(String horario_llegada) {
        this.horario_llegada = horario_llegada;
    }

    /**
     * @return the id_bus
     */
    public Bus getId_bus() {
        return id_bus;
    }

    /**
     * @param id_bus the id_bus to set
     */
    public void setId_bus(Bus id_bus) {
        this.id_bus = id_bus;
    }

    /**
     * @return the id_ruta
     */
    public Ruta getId_ruta() {
        return id_ruta;
    }

    /**
     * @param id_ruta the id_ruta to set
     */
    public void setId_ruta(Ruta id_ruta) {
        this.id_ruta = id_ruta;
    }

    
}
