#include <gtk/gtk.h>

GtkWidget *win=NULL;
GtkBuilder *builder=NULL;
GError *error=NULL;
GtkButton *button=NULL;

void clicked(GtkButton *button, gpointer user_data)
{
    gtk_button_set_label(button, "clicked");
}

void destroy_(GtkWidget *object, gpointer user_data)
{
    gtk_main_quit();
}

int main (int argc, char *argv[])
{
    gtk_init(&argc, &argv);
    builder=gtk_builder_new();

    if(!gtk_builder_add_from_file(builder, "C:\\mavidurakio\\Example1\\Forms\\main_window.glade", &error))
    {
        return 0;
    }


    win=GTK_WIDGET(gtk_builder_get_object(builder, "mainwnd"));
    //button=GTK_BUTTON(gtk_builder_get_object(builder, "button1"));
    //gtk_window_set_default_size(GTK_WINDOW (win), 500, 500);
    gtk_widget_realize(win);
    gtk_builder_connect_signals(builder, NULL);
    gtk_widget_show_all(win);
    g_object_unref(builder);

    gtk_main();

    return 0;
}


/*
#include <gtk/gtk.h>

//#define DEFAULT_THEME_NAME "Adwaita"

static void
activate (GtkApplication* app,
          gpointer        user_data)
{
  GtkWidget *window;
  GtkBuilder      *builder;


  builder = gtk_builder_new();

  gtk_builder_add_from_file (builder, "D:\\source_c\\GTK\\Example1\\Forms\\main_window.glade", NULL);
  window = GTK_WIDGET(gtk_builder_get_object(builder, "mainwnd"));
  gtk_widget_realize(window);
  //window = gtk_application_window_new(app);
  //gtk_window_set_title(GTK_WINDOW (window), "Window");
  //gtk_window_set_default_size(GTK_WINDOW (window), 500, 500);
  gtk_widget_show_all(window);
}

int
main (int    argc,
      char **argv)
{
  GtkApplication *app;
  int status;

  app = gtk_application_new ("org.gtk.example", G_APPLICATION_FLAGS_NONE);
  g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);
  status = g_application_run (G_APPLICATION (app), argc, argv);
  g_object_unref (app);

  return status;
}
*/
