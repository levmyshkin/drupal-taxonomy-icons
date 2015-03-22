<?php
/**
 * @file
 * site_made_ru_features_taxonomy_icons.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function site_made_ru_features_taxonomy_icons_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'categories_icons';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Иконки';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Категории';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Сбросить';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Термин таксономии: Содержимое using Категория */
  $handler->display->display_options['relationships']['reverse_field_category_icon_node']['id'] = 'reverse_field_category_icon_node';
  $handler->display->display_options['relationships']['reverse_field_category_icon_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_category_icon_node']['field'] = 'reverse_field_category_icon_node';
  /* Поле: Термин таксономии: Иконка */
  $handler->display->display_options['fields']['field_icon']['id'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['table'] = 'field_data_field_icon';
  $handler->display->display_options['fields']['field_icon']['field'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['label'] = '';
  $handler->display->display_options['fields']['field_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Contextual filter: Содержимое: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_category_icon_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Все';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['categories_icons'] = array(
    t('Master'),
    t('Категории'),
    t('more'),
    t('Apply'),
    t('Сбросить'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('field_category_icon'),
    t('Все'),
    t('Block'),
  );
  $export['categories_icons'] = $view;

  return $export;
}
