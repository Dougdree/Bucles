/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package persistencia;

import java.util.List;
import javax.persistence.EntityManager;
import javax.persistence.EntityManagerFactory;
import javax.persistence.Persistence;
import javax.persistence.Query;
import javax.persistence.criteria.CriteriaQuery;
import javax.persistence.criteria.Root;
import logica.Ruta_Bus;

/**
 *
 * @author fabricio
 */
public class Ruta_BusJpaController {

    private EntityManagerFactory emf = null;

    public Ruta_BusJpaController() {
        emf = Persistence.createEntityManagerFactory("GestionBusesPU");
    }

    public Ruta_BusJpaController(EntityManagerFactory emf) {
        this.emf = emf;
    }

    public EntityManager getEntityManager() {
        return emf.createEntityManager();
    }

    public void create(Ruta_Bus ruta_bus) {
        EntityManager em = null;
        try {
            em = getEntityManager();
            em.getTransaction().begin();
            em.persist(ruta_bus);
            em.getTransaction().commit();
        } finally {
            if (em != null) {
                em.close();
            }
        }
    }

    public List<Ruta_Bus> findRuta_BusEntities() {
        return findRuta_BusEntities(true, -1, -1);
    }

    public List<Ruta_Bus> findRuta_BusEntities(int maxResults, int firstResult) {
        return findRuta_BusEntities(false, maxResults, firstResult);
    }

    private List<Ruta_Bus> findRuta_BusEntities(boolean all, int maxResults, int firstResult) {
        EntityManager em = getEntityManager();
        try {
            CriteriaQuery<Ruta_Bus> cq = em.getCriteriaBuilder().createQuery(Ruta_Bus.class);
            cq.select(cq.from(Ruta_Bus.class));
            Query q = em.createQuery(cq);
            if (!all) {
                q.setMaxResults(maxResults);
                q.setFirstResult(firstResult);
            }
            return q.getResultList();
        } finally {
            em.close();
        }
    }

    public Ruta_Bus findRuta_Bus(String id) {
        EntityManager em = getEntityManager();
        try {
            return em.find(Ruta_Bus.class, id);
        } finally {
            em.close();
        }
    }

    public int getRuta_BusCount() {
        EntityManager em = getEntityManager();
        try {
            CriteriaQuery<Long> cq = em.getCriteriaBuilder().createQuery(Long.class);
            Root<Ruta_Bus> rt = cq.from(Ruta_Bus.class);
            cq.select(em.getCriteriaBuilder().count(rt));
            Query q = em.createQuery(cq);
            return ((Long) q.getSingleResult()).intValue();
        } finally {
            em.close();
        }
    }
}
