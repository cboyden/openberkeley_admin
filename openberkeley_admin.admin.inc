<?php
/**
 * Administer Open Berkeley Settings Page
 */
function openberkeley_admin_openberkeley_settings_page() {
  $item = menu_get_item('admin/config/openberkeley');
  if ($content = system_admin_menu_block($item)) {
    $output = theme('admin_block_content', array('content' => $content));
  }
  else {
    $output = t('You do not have any administrative items.');
  }

  return $output;
}
