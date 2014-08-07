<?php
/**
 * @file
 * openberkeley_admin.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function openberkeley_admin_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dashboard';
  $page->task = 'page';
  $page->admin_title = 'Total Control administrative dashboard';
  $page->admin_description = '';
  $page->path = 'admin/dashboard';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'have total control',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Dashboard',
    'name' => 'management',
    'weight' => '-100',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Dashboard',
      'name' => 'management',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => TRUE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_dashboard_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'dashboard';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Dashboard';
  $display->uuid = '17c3c49e-ef68-422b-971c-cad25a7bbeba';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-45fae3a5-7828-4d4b-895b-507b895ff6d0';
  $pane->panel = 'left';
  $pane->type = 'create';
  $pane->subtype = 'create';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'types' => array(
      'article' => 'article',
      'project' => 'project',
      'page' => 0,
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = '';
  $pane->uuid = '45fae3a5-7828-4d4b-895b-507b895ff6d0';
  $display->content['new-45fae3a5-7828-4d4b-895b-507b895ff6d0'] = $pane;
  $display->panels['left'][0] = 'new-45fae3a5-7828-4d4b-895b-507b895ff6d0';
  $pane = new stdClass();
  $pane->pid = 'new-da8fff56-3b76-4c0b-ae6c-5722e5f48a96';
  $pane->panel = 'left';
  $pane->type = 'overview_content';
  $pane->subtype = 'overview_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'types' => array(
      'article' => 'article',
      'page' => 'page',
      'project' => 'project',
      'video' => 'video',
    ),
    'comments' => array(
      'article' => 'article',
      'page' => 0,
      'project' => 0,
      'video' => 0,
    ),
    'spam' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = '';
  $pane->uuid = 'da8fff56-3b76-4c0b-ae6c-5722e5f48a96';
  $display->content['new-da8fff56-3b76-4c0b-ae6c-5722e5f48a96'] = $pane;
  $display->panels['left'][1] = 'new-da8fff56-3b76-4c0b-ae6c-5722e5f48a96';
  $pane = new stdClass();
  $pane->pid = 'new-faa41f4c-4656-4018-8e96-914a38960e77';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'control_users_panes-pane_tc_new_users';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '10',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'faa41f4c-4656-4018-8e96-914a38960e77';
  $display->content['new-faa41f4c-4656-4018-8e96-914a38960e77'] = $pane;
  $display->panels['left'][2] = 'new-faa41f4c-4656-4018-8e96-914a38960e77';
  $pane = new stdClass();
  $pane->pid = 'new-508242f9-2e3a-4c6b-83cc-930c2bd4e40f';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'control_content_panes-pane_tc_new';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '10',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = '';
  $pane->uuid = '508242f9-2e3a-4c6b-83cc-930c2bd4e40f';
  $display->content['new-508242f9-2e3a-4c6b-83cc-930c2bd4e40f'] = $pane;
  $display->panels['left'][3] = 'new-508242f9-2e3a-4c6b-83cc-930c2bd4e40f';
  $pane = new stdClass();
  $pane->pid = 'new-8285bc4a-1f11-4cc3-954e-26302ff8dd74';
  $pane->panel = 'right';
  $pane->type = 'menus';
  $pane->subtype = 'menus';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'item1' => NULL,
    'item2' => NULL,
    'override_title' => 0,
    'override_title_text' => '',
    'menus' => array(
      'menu-footer-menu' => 'menu-footer-menu',
      'main-menu' => 'main-menu',
      'menu-quick-links-menu' => 'menu-quick-links-menu',
      'menu-secondary-menu' => 'menu-secondary-menu',
      'devel' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = '';
  $pane->uuid = '8285bc4a-1f11-4cc3-954e-26302ff8dd74';
  $display->content['new-8285bc4a-1f11-4cc3-954e-26302ff8dd74'] = $pane;
  $display->panels['right'][0] = 'new-8285bc4a-1f11-4cc3-954e-26302ff8dd74';
  $pane = new stdClass();
  $pane->pid = 'new-2169c437-330b-4d52-b364-d539e33d082a';
  $pane->panel = 'right';
  $pane->type = 'node_types';
  $pane->subtype = 'node_types';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'types' => array(
      'article' => 'article',
      'page' => 'page',
      'project' => 'project',
      'video' => 'video',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = '';
  $pane->uuid = '2169c437-330b-4d52-b364-d539e33d082a';
  $display->content['new-2169c437-330b-4d52-b364-d539e33d082a'] = $pane;
  $display->panels['right'][1] = 'new-2169c437-330b-4d52-b364-d539e33d082a';
  $pane = new stdClass();
  $pane->pid = 'new-fb4104ea-0045-4435-9566-d6bf3ad4c500';
  $pane->panel = 'right';
  $pane->type = 'taxonomy';
  $pane->subtype = 'taxonomy';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'vids' => array(
      0 => '4',
      1 => '3',
      2 => '1',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = '';
  $pane->uuid = 'fb4104ea-0045-4435-9566-d6bf3ad4c500';
  $display->content['new-fb4104ea-0045-4435-9566-d6bf3ad4c500'] = $pane;
  $display->panels['right'][2] = 'new-fb4104ea-0045-4435-9566-d6bf3ad4c500';
  $pane = new stdClass();
  $pane->pid = 'new-cf6d20bf-49af-4c7e-acb7-2723fbd47710';
  $pane->panel = 'right';
  $pane->type = 'panel_pages';
  $pane->subtype = 'panel_pages';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'item1' => NULL,
    'item2' => NULL,
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = '';
  $pane->uuid = 'cf6d20bf-49af-4c7e-acb7-2723fbd47710';
  $display->content['new-cf6d20bf-49af-4c7e-acb7-2723fbd47710'] = $pane;
  $display->panels['right'][3] = 'new-cf6d20bf-49af-4c7e-acb7-2723fbd47710';
  $pane = new stdClass();
  $pane->pid = 'new-c974021e-6861-4d37-b736-5d19986e5d58';
  $pane->panel = 'right';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'uuid:f46f3dc1-1d9d-eed4-bd10-769e29823d74';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'c974021e-6861-4d37-b736-5d19986e5d58';
  $display->content['new-c974021e-6861-4d37-b736-5d19986e5d58'] = $pane;
  $display->panels['right'][4] = 'new-c974021e-6861-4d37-b736-5d19986e5d58';
  $pane = new stdClass();
  $pane->pid = 'new-c3943d85-0872-46c4-bc16-043ed898d18c';
  $pane->panel = 'right';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'uuid:b78d8676-ac06-bc74-fdb1-f54ade38c77f';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'c3943d85-0872-46c4-bc16-043ed898d18c';
  $display->content['new-c3943d85-0872-46c4-bc16-043ed898d18c'] = $pane;
  $display->panels['right'][5] = 'new-c3943d85-0872-46c4-bc16-043ed898d18c';
  $pane = new stdClass();
  $pane->pid = 'new-091a4bea-6c62-476c-9960-616e95bb9d4b';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'control_content_panes-pane_tc_unpub';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '10',
    'override_title' => 0,
    'override_title_text' => '',
    'view_mode' => NULL,
    'widget_title' => 'Unpublished content',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '091a4bea-6c62-476c-9960-616e95bb9d4b';
  $display->content['new-091a4bea-6c62-476c-9960-616e95bb9d4b'] = $pane;
  $display->panels['right'][6] = 'new-091a4bea-6c62-476c-9960-616e95bb9d4b';
  $pane = new stdClass();
  $pane->pid = 'new-26ff0e2b-99a3-4778-b10a-df8289e68ae9';
  $pane->panel = 'top';
  $pane->type = 'welcome';
  $pane->subtype = 'welcome';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = '';
  $pane->uuid = '26ff0e2b-99a3-4778-b10a-df8289e68ae9';
  $display->content['new-26ff0e2b-99a3-4778-b10a-df8289e68ae9'] = $pane;
  $display->panels['top'][0] = 'new-26ff0e2b-99a3-4778-b10a-df8289e68ae9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['page-dashboard'] = $page;

  return $pages;
}
