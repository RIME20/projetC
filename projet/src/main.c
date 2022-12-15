/*
 * Initial main.c file generated by Glade. Edit as required.
 * Glade will not overwrite this file.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "interface.h"
#include "support.h"

int
main (int argc, char *argv[])
{
  /*GtkWidget *RG_windowNU;
  GtkWidget *SR_windowListeElectorale;
  GtkWidget *SR_windowAL;
  GtkWidget *RG_Ajout_Observateur;
  GtkWidget *RG_EA1;
  GtkWidget *RG_windowCSU;
  GtkWidget *OZ_windowER;
  GtkWidget *OZ_windowER1;
  GtkWidget *OZ_windowAR;
  GtkWidget *OZ_windowMR;
  GtkWidget *OZ_windowCSR;
  GtkWidget *FS_windowBVacc;
  GtkWidget *FS_windowBVaj;
  GtkWidget *FS_windowBVmod;
  GtkWidget *FS_windowBVsupp;
  GtkWidget *RG_GestionUser;*/
  GtkWidget *RG_windowPrincipale;
  GtkWidget *RG_windowEspaceAdmin;
  /*GtkWidget *RG_windowGestionO;
  GtkWidget *Stat__stiques;
  GtkWidget *RG_windowModifUser;
  GtkWidget *RG_windowEspaceBV;
  GtkWidget *RG_windowDemade_modif;
  GtkWidget *SR_windowAI;
  GtkWidget *SR_windowSupprimer;
  GtkWidget *SR_windowCSU;
  GtkWidget *SR_windowModifier;
  GtkWidget *SR_windowAFFICHER;
  GtkWidget *SR_WINDOWchercher;
  GtkWidget *HB_windowGE;
  GtkWidget *HB_windowAE;
  GtkWidget *HB_windowME;
  GtkWidget *HB_windowSE;*/

#ifdef ENABLE_NLS
  bindtextdomain (GETTEXT_PACKAGE, PACKAGE_LOCALE_DIR);
  bind_textdomain_codeset (GETTEXT_PACKAGE, "UTF-8");
  textdomain (GETTEXT_PACKAGE);
#endif

  gtk_set_locale ();
  gtk_init (&argc, &argv);

  add_pixmap_directory (PACKAGE_DATA_DIR "/" PACKAGE "/pixmaps");

  /*
   * The following code was added by Glade to create one of each component
   * (except popup menus), just so that you see something after building
   * the project. Delete any components that you don't want shown initially.
   */
 /* RG_windowNU = create_RG_windowNU ();
  gtk_widget_show (RG_windowNU);
  SR_windowListeElectorale = create_SR_windowListeElectorale ();
  gtk_widget_show (SR_windowListeElectorale);
  SR_windowAL = create_SR_windowAL ();
  gtk_widget_show (SR_windowAL);
  RG_Ajout_Observateur = create_RG_Ajout_Observateur ();
  gtk_widget_show (RG_Ajout_Observateur);
  RG_EA1 = create_RG_EA1 ();
  gtk_widget_show (RG_EA1);
  RG_windowCSU = create_RG_windowCSU ();
  gtk_widget_show (RG_windowCSU);
  OZ_windowER = create_OZ_windowER ();
  gtk_widget_show (OZ_windowER);
  OZ_windowER1 = create_OZ_windowER1 ();
  gtk_widget_show (OZ_windowER1);
  OZ_windowAR = create_OZ_windowAR ();
  gtk_widget_show (OZ_windowAR);
  OZ_windowMR = create_OZ_windowMR ();
  gtk_widget_show (OZ_windowMR);
  OZ_windowCSR = create_OZ_windowCSR ();
  gtk_widget_show (OZ_windowCSR);
  FS_windowBVacc = create_FS_windowBVacc ();
  gtk_widget_show (FS_windowBVacc);
  FS_windowBVaj = create_FS_windowBVaj ();
  gtk_widget_show (FS_windowBVaj);
  FS_windowBVmod = create_FS_windowBVmod ();
  gtk_widget_show (FS_windowBVmod);
  FS_windowBVsupp = create_FS_windowBVsupp ();
  gtk_widget_show (FS_windowBVsupp);
  RG_GestionUser = create_RG_GestionUser ();
  gtk_widget_show (RG_GestionUser);*/
  RG_windowPrincipale = create_RG_windowPrincipale ();
  gtk_widget_show (RG_windowPrincipale);
  RG_windowEspaceAdmin = create_RG_windowEspaceAdmin ();
  gtk_widget_show (RG_windowEspaceAdmin);
  /*RG_windowGestionO = create_RG_windowGestionO ();
  gtk_widget_show (RG_windowGestionO);
  Stat__stiques = create_Stat__stiques ();
  gtk_widget_show (Stat__stiques);
  RG_windowModifUser = create_RG_windowModifUser ();
  gtk_widget_show (RG_windowModifUser);
  RG_windowEspaceBV = create_RG_windowEspaceBV ();
  gtk_widget_show (RG_windowEspaceBV);
  RG_windowDemade_modif = create_RG_windowDemade_modif ();
  gtk_widget_show (RG_windowDemade_modif);
  SR_windowAI = create_SR_windowAI ();
  gtk_widget_show (SR_windowAI);
  SR_windowSupprimer = create_SR_windowSupprimer ();
  gtk_widget_show (SR_windowSupprimer);
  SR_windowCSU = create_SR_windowCSU ();
  gtk_widget_show (SR_windowCSU);
  SR_windowModifier = create_SR_windowModifier ();
  gtk_widget_show (SR_windowModifier);
  SR_windowAFFICHER = create_SR_windowAFFICHER ();
  gtk_widget_show (SR_windowAFFICHER);
  SR_WINDOWchercher = create_SR_WINDOWchercher ();
  gtk_widget_show (SR_WINDOWchercher);
  HB_windowGE = create_HB_windowGE ();
  gtk_widget_show (HB_windowGE);
  HB_windowAE = create_HB_windowAE ();
  gtk_widget_show (HB_windowAE);
  HB_windowME = create_HB_windowME ();
  gtk_widget_show (HB_windowME);
  HB_windowSE = create_HB_windowSE ();
  gtk_widget_show (HB_windowSE);*/

  gtk_main ();
  return 0;
}

