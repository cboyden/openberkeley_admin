api = 2
core = 7.x

projects[admin_menu][version] = 3.0-rc4
projects[admin_menu][subdir] = contrib

projects[admin_views][version] = 1.3
projects[admin_views][subdir] = contrib

projects[backup_migrate][version] = 2.8
projects[backup_migrate][subdir] = contrib

projects[google_analytics][version] = 2.0
projects[google_analytics][subdir] = contrib

projects[linkchecker][version] = 1.1
projects[linkchecker][subdir] = contrib
projects[linkchecker][patch][1886890] = "https://www.drupal.org/files/linkchecker-hide-messages-1886890-11.patch"

projects[navigation404][version] = 1.0
projects[navigation404][subdir] = contrib

projects[redirect][version] = 1.x-dev
projects[redirect][subdir] = contrib
projects[redirect][download][type] = git
projects[redirect][download][revision] = 6957f39
projects[redirect][download][branch] = 7.x-1.x
projects[redirect][patch][1796596] = https://www.drupal.org/files/redirect-detect_prevent_circular_redirects_patch_and_test-1796596-48.patch

projects[total_control][version] = 2.4
projects[total_control][subdir] = contrib

projects[ucberkeley_envconf][type] = module
projects[ucberkeley_envconf][subdir] = ucb
projects[ucberkeley_envconf][download][type] = file
projects[ucberkeley_envconf][download][url] = https://github.com/ucb-ist-drupal/ucberkeley_envconf-7/releases/download/7.x-2.0-alpha1/ucberkeley_envconf-7.x-2.0-alpha1.tar.gz

; Views Bulk Operations is provided here in case this feature is not built by
; openberkeley-*.make.  When this recipe is updated it should also be updated
; in openberkeley-*.make.  It exists there to ensure that the vbo recipe in
; panopoly_magic is overridden.
projects[views_bulk_operations][version] = 3.x-dev
projects[views_bulk_operations][subdir] = contrib
projects[views_bulk_operations][download][type] = git
projects[views_bulk_operations][download][revision] = 38dfd2d
projects[views_bulk_operations][download][branch] = 7.x-3.x


