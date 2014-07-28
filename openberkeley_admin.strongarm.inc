<?php
/**
 * @file
 * openberkeley_admin.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function openberkeley_admin_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = '[node:menu-link:parents:join-path]/[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_home_page_content_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_home_page_content_pattern'] = $strongarm;

  return $export;
}
