<?php
/**
 * @file
 * openberkeley_admin.features.uuid_fpp.inc
 */

/**
 * Implements hook_uuid_features_default_fpps().
 */
function openberkeley_admin_uuid_features_default_fpps() {
  $fpps = array();

  $fpps[] = array(
    'timestamp' => 1383666741,
    'title' => 'Other Administration ',
    'log' => '',
    'bundle' => 'quick_links',
    'link' => 0,
    'path' => '',
    'reusable' => 0,
    'admin_title' => '',
    'admin_description' => '',
    'category' => 'Reusable Content',
    'view_access' => NULL,
    'edit_access' => NULL,
    'created' => 1352836370,
    'uuid' => 'b78d8676-ac06-bc74-fdb1-f54ade38c77f',
    'language' => '',
    'field_quick_links_links' => array(
      'und' => array(
        0 => array(
          'url' => 'admin/appearance/settings/berkeley',
          'title' => 'Berkeley theme settings',
          'attributes' => array(),
        ),
        1 => array(
          'url' => 'admin/config/system/site-information',
          'title' => 'Edit Site Information',
          'attributes' => array(),
        ),
        2 => array(
          'url' => 'admin/structure/block/manage/block/1/configure?destination=admin/dashboard',
          'title' => 'Edit footer address',
          'attributes' => array(),
        ),
        3 => array(
          'url' => 'admin/structure/block/manage/block/2/configure?destination=admin/dashboard',
          'title' => 'Edit footer phone and email',
          'attributes' => array(),
        ),
        4 => array(
          'url' => 'admin/structure/block/manage/block/3/configure?destination=admin/dashboard',
          'title' => 'Edit footer department links',
          'attributes' => array(),
        ),
        5 => array(
          'url' => 'admin/structure/block/manage/block/4/configure?destination=admin/dashboard',
          'title' => 'Edit footer campus links',
          'attributes' => array(),
        ),
        6 => array(
          'url' => 'admin/structure/taxonomy/faqs',
          'title' => 'Add FAQ Categories',
          'attributes' => array(),
        ),
      ),
    ),
  );
  $fpps[] = array(
    'timestamp' => 1372704120,
    'title' => 'URL Administration',
    'log' => '',
    'bundle' => 'quick_links',
    'link' => 0,
    'path' => '',
    'reusable' => 0,
    'admin_title' => '',
    'admin_description' => '',
    'category' => 'Reusable Content',
    'view_access' => NULL,
    'edit_access' => NULL,
    'created' => 1352836320,
    'uuid' => 'f46f3dc1-1d9d-eed4-bd10-769e29823d74',
    'language' => '',
    'field_quick_links_links' => array(
      'und' => array(
        0 => array(
          'url' => 'admin/config/search/path',
          'title' => 'Administer URL aliases',
          'attributes' => array(),
        ),
        1 => array(
          'url' => 'admin/config/search/redirect',
          'title' => 'Administer URL redirects',
          'attributes' => array(),
        ),
      ),
    ),
  );
  return $fpps;
}
