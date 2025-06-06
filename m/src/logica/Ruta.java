/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package logica;

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
@Table(name = "ruta")
public class Ruta {

    @Id
    @Column(name = "id")
    private Integer id;

    @Basic
    @Column(name = "nombre")
    private String nombre;

    @Basic
    @Column(name = "lugar_salida")
    private String lugar_salida;

    @Basic
    @Column(name = "lugar_destino")
    private String lugar_destino;

    public Ruta() {
    }

    public Ruta(Integer id, String nombre, String lugar_salida, String lugar_destino) {
        this.id = id;
        this.nombre = nombre;
        this.lugar_salida = lugar_salida;
        this.lugar_destino = lugar_destino;
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
     * @return the nombre
     */
    public String getNombre() {
        return nombre;
    }

    /**
     * @param nombre the nombre to set
     */
    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    /**
     * @return the lugar_salida
     */
    public String getLugar_salida() {
        return lugar_salida;
    }

    /**
     * @param lugar_salida the lugar_salida to set
     */
    public void setLugar_salida(String lugar_salida) {
        this.lugar_salida = lugar_salida;
    }

    /**
     * @return the lugar_destino
     */
    public String getLugar_destino() {
        return lugar_destino;
    }

    /**
     * @param lugar_destino the lugar_destino to set
     */
    public void setLugar_destino(String lugar_destino) {
        this.lugar_destino = lugar_destino;
    }
    
    

}
