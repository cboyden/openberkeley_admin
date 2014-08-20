# openberkeley_admin #

Feature for capturing administrator configuration.

# Provides #

## Menu: admin/config/openberkeley ##

This menu stub can be used by other Open Berkeley features/modules which need to
provide administrator settings.

## Administration Menu ##

* Enable admin_menu and admin_menu_toolbar

/admin/config/administration/admin_menu:
* Disable client cache
* Disable top of page

## Total Control and Administration Views configuration ##

* Provide custom default panel page for /admin/dashboard
* Provide blocks in code for Other Administration and URL Administration panes
* Add admin_views control_users view
* Form alter to prevent role escalation to Administrator at /admin/dashboard/users > Modify user roles
* Fix date format in control_users view
* Set Builder permissions
* Provide custom permissions to specify the visibility of the panes at admin/dashboard
* Add an Open Berkeley tab exposing links to Open Berkeley configuration
* Add a pane providing links to Backup and Migrate

## Link Checker ##

## URL Redirects ##

## Navigation 404 ##

## Google Analytics ##

## Backup and Migrate ##
* Prevent users from saving backups to the server if Pantheon environment variables are present.
* Set backup file name to use \[site:url-brief\] in the default profile.  This is useful for differentiating backups taken in different pantheon environments (dev/test/live).
